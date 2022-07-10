#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// OpenCV includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

int main(int argc, const char** argv)
{
    // Read images
    Mat color = imread("../lena.jpg");
    Mat gray = imread("../lena.jpg, CV_LOAD_IMAGE_GRAYSCALE");
    return 0;
}