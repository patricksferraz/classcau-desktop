#ifndef SEGMENTADOR_H
#define SEGMENTADOR_H

#include <opencv2/opencv.hpp>

using namespace cv;

class Segmentador
{
    string folder_samples;
    string folder_result;
    string generated_format;
    string n_image;
    Mat image, bg, bgt, res;
    vector<vector<Point>> contours;
public:
    Segmentador(string path);
    Mat first_pass();
    void second_pass(string n_image, Mat canny_image);
    void third_pass();
    void fourth_pass(string n_image);
};

#endif // SEGMENTADOR_H
