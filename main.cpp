#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    cv::Mat hoge = cv::imread("./bin/src.png");
    cv::imshow("test", hoge);
    for(int i = 0; i < 4; i++){
        std::cout << i << std::endl;
    }
    return 0;
}