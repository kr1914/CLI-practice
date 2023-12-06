#include "shape.h"
#include <opencv2/opencv.hpp>
#include <stdio.h>

int main() {
  shape::Rectangle rect(10, 30);
  rect.Print();

  cv::Mat image = cv::imread("imgs/img.png"); // 이미지 불러오기
  if(image.empty()) {
      std::cout << "이미지를 불러올 수 없습니다." << std::endl;
      return -1;
  }

  std::cout << image.at<cv::Vec3b>(0, 0);

  return 0;
}
