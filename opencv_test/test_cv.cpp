#include <opencv2/highgui.hpp>
#include <iostream>

int main(int argc, char** argv){
    cv::Mat img;
    img = cv::imread("./imgs/20210113.jpg", cv::IMREAD_COLOR);

    if(! img.data){
        std::cout<< "img not found or unable to open" << std::endl;
        return -1;
    }

    // cv::namedWindow("Opencv Test", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Opencv Test", img);

    // cv::waitKey(0);
    const cv::String &save_file = "./imgs/result_new.png";
    cv::imwrite(save_file, img);
    return 0;

}