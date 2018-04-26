# Import the necessary packages
import numpy as np
import cv2
import sys


class Segmentation():
	"""docstring for Segmentation"""
	def __init__(self, image_in):
		super(Segmentation, self).__init__()
		self.folder_samples = 'samples'
		self.folder_result = 'result'
		self.generated_format = 'png'
		self.image = cv2.imread("%s" %(image_in)) # Open the image
		a, image_in = image_in.split("/")
		image_in, _ = image_in.split(".")
		canny_image = self.first_pass()
		self.second_pass(image_in, canny_image)
		self.third_pass()
		self.fourth_pass(image_in)

	def first_pass(self):
		gray = cv2.cvtColor(self.image, cv2.COLOR_BGR2GRAY) # Convert the image in gray scale
		blur = cv2.GaussianBlur(gray,(5,5),0) # Used GaussianBlur filter to remove noise from the image, it uses a 5x5 kernel
		ret, thresh = cv2.threshold(blur, 0, 255, cv2.THRESH_BINARY+cv2.THRESH_OTSU) # Then we apply the otsu thresholding
		bgt1 = cv2.dilate(thresh, None, iterations=3)
		self.bgt = cv2.erode(bgt1, None, iterations=3)
		ret, self.bg = cv2.threshold(self.bgt, 1, 128, 1)
		canny_image = cv2.Canny(self.bg,255,255)
		return canny_image

	def second_pass(self, image_in, canny_image):
		new, self.contours, hierarchy = cv2.findContours(canny_image, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
		# Finding the contors in the image using chain approximation
		marker32 = np.int32(self.bg)
		# converting the marker to float 32 bit
		m = cv2.convertScaleAbs(marker32)
		ret, thresh = cv2.threshold(m, 0, 255, cv2.THRESH_BINARY+cv2.THRESH_OTSU)
		# Apply thresholding on the image to convert to binary image
		thresh_inv = cv2.bitwise_not(thresh)
		# Invert the thresh
		res = cv2.bitwise_and(self.image, self.image, mask=thresh)
		# Bitwise and with the image mask thresh
		res3 = cv2.bitwise_and(self.image, self.image, mask=thresh_inv)
		# Bitwise and the image with mask as threshold invert
		res4 = cv2.addWeighted(res, 1, res3, 1, 0)
		# Take the weighted average
		contourned = cv2.drawContours(res4, self.contours, -1, (0, 255, 0), 1)
		# Draw the contours on the image with green color and pixel width is 1
		cv2.imwrite("%s/%s.%s" %(self.folder_result,image_in,self.generated_format), contourned)

	def third_pass(self):
		m = cv2.convertScaleAbs(self.bgt)
		ret, thresh = cv2.threshold(m, 0, 255, cv2.THRESH_BINARY_INV+cv2.THRESH_OTSU)
		self.res = cv2.bitwise_and(self.image,self.image,mask = thresh)
		self.res[np.where(self.res == [0])] = [255]

	def fourth_pass(self, image_in):
		#Generating samples
		idx = 0
		count = 0
		for c in self.contours:
			x,y,w,h = cv2.boundingRect(c)
			idx+=1
			if(idx%2==0):
				count+=1
				new_img=self.res[y:y+h,x:x+w]
				cv2.imwrite("%s/%s_%s.%s" %(self.folder_samples,image_in,count,self.generated_format), new_img)
			# Generate the step image
		

if __name__ == "__main__":
    Segmentation(sys.argv[1])
		