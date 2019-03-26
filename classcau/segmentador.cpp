#include "segmentador.h"

Segmentador::Segmentador(string path)
{
    folder_samples = "samples";
    folder_result = "result";
    generated_format = "png";
    caminho_raiz = "/home/ferraz/Documentos/dev_area/projects/uesc/uesc_tcc/classcau/";
    image = imread(path);
    n_image = "temp";
    Mat canny_image = first_pass();
    second_pass(n_image, canny_image);
    third_pass();
    fourth_pass(n_image);
}

Mat Segmentador::first_pass()
{
    Mat gray, blur, thresh, bgt1, canny_image;

    cvtColor(image, gray, COLOR_BGR2GRAY);
    // imshow("GRAY", gray);//
    // waitKey();//
    GaussianBlur(gray, blur, Size(5,5), 0);
    // imshow("Gaussian", blur);//
    // waitKey();//
    threshold(blur, thresh, 0, 255, THRESH_BINARY + THRESH_OTSU);
    // imshow("threshold_gaussian", thresh);//
    // waitKey();//
    dilate(thresh, bgt1, Mat(), Point(-1,-1), 3);
    // imshow("Dilate", bgt1);//
    // waitKey();//
    erode(bgt1, bgt, Mat(), Point(-1,-1), 3);
    // imshow("Erode", bgt);//
    // waitKey();//
    threshold(bgt, bg, 1, 128, 1);
    // imshow("threshold_erode", bg);//
    // waitKey();//
    Canny(bg, canny_image, 255, 255);
    // imshow("Canny", canny_image);//
    // waitKey();//
    return canny_image;
}

void Segmentador::second_pass(string n_image, Mat canny_image)
{
    Mat m, thresh, thresh_inv, res, res2, res3;
    vector<Vec4i> hierarchy;

    findContours(canny_image, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
    // imshow("Contours", canny_image);//
    // waitKey();//
    //marker32 = np.int32(self.bg)
        //# converting the marker to float 32 bit
        //m = cv2.convertScaleAbs(marker32)
    convertScaleAbs(bg, m);
    // imshow("ScaleAbs", m);//
    // waitKey();//
    threshold(m, thresh, 0, 255, THRESH_BINARY + THRESH_OTSU);
    // imshow("Threshold_scale", thresh);//
    // waitKey();//
    bitwise_not(thresh, thresh_inv);
    // imshow("Threshold_bit_not", thresh_inv);//
    // waitKey();//
    bitwise_and(image, image, res, thresh);
    // imshow("bit_and_thresh", res);//
    // waitKey();//
    bitwise_and(image, image, res2, thresh_inv);
    // imshow("bit_and_thresh_inv", res2);//
    // waitKey();//
    addWeighted(res, 1, res2, 1, 0, res3);
    // imshow("addWeighted", res3);//
    // waitKey();//
    drawContours(res3, contours, -1, Scalar(0, 255, 0));
    // imshow("draw_contours", res3);//
    // waitKey();//
    imwrite(caminho_raiz + folder_result + "/" + n_image + "." + generated_format, res3);
}

void Segmentador::third_pass()
{
    Mat m, thresh, mask;

    convertScaleAbs(bgt, m);
    // imshow("Scale_abs", m);//
    // waitKey();//
    threshold(m, thresh, 0, 255, THRESH_BINARY_INV + THRESH_OTSU);
    // imshow("Threshold_m", thresh);//
    // waitKey();//
    bitwise_and(image, image, res, thresh);
    // imshow("bitwise_and", res);//
    // waitKey();//
    inRange(res, Scalar(0,0,0), Scalar(0,0,0), mask);
    // imshow("bitwise_and", mask);//
    // waitKey();//
    res.setTo(Scalar(255, 255, 255), mask);
    // imshow("bitwise_and", res);//
    // waitKey();//
}

void Segmentador::fourth_pass(string n_image)
{
    Mat new_img;
    Rect rect;
    int idx = 0, count = 0;
    for (unsigned int i = 0; i < contours.size(); i++) {
      rect = boundingRect(contours[i]);
      idx += 1;
      if (idx % 2 == 0) {
        count += 1;
        new_img = res(rect);
        imwrite(caminho_raiz + folder_samples + "/" + n_image + "_" + to_string(count) + "." + generated_format, new_img);
      }
    }
}
