#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat img = cv::imread(argv[1], -1);

    cv::namedWindow("Example5-in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Example5-out", cv::WINDOW_AUTOSIZE);
    
    cv::imshow("Example5-in", img);

    cv::Mat out;
    cv::GaussianBlur(img, out, cv::Size(5, 5), 3, 3);
    cv::GaussianBlur(out, out, cv::Size(5, 5), 3, 3);

    cv::imshow("Example5-out", out);
    cv::waitKey(0);

    return 0;
}
