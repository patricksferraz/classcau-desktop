#ifndef SEGMENTER_H
#define SEGMENTER_H

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Segmenter
{
    string folder_samples;
    string folder_result;
    string generated_format;
    string caminho_raiz;
    string n_image;
    Mat image, bg, bgt, res;
    vector<vector<Point>> contours;
public:
    Segmenter(string path);
    Mat first_pass();
    void second_pass(string n_image, Mat canny_image);
    void third_pass();
    void fourth_pass(string n_image);
};

#endif // SEGMENTER_H
