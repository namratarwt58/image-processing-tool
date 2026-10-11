
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
    Mat image = imread("photo.jpg");

    if (image.empty()) {
        cout << "Could not load image!";
        return 1;
    }

    Mat grayImage;

    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    imwrite("grayscale.jpg", grayImage);

    cout << "Grayscale image saved successfully!";

    return 0;
}
