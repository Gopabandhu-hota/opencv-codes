// image_display.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

/*int main()
{
	Mat test(300, 120, CV_8UC3, Scalar(0, 0, 0));
	int i = 0, j = 0;
	for (j = 0; j < 40; j++)
	{
		for (i = 0; i < 300; i++)
		{
			test.at<Vec3b>(i, j) = (0, 0, 255);
		}
	}
	for (j = 40; j < 80; j++)
	{
		for (i = 0; i < 300; i++)
		{
			test.at<Vec3b>(i, j) = (0, 255, 0);
		}
	}
	for (j = 80; j < 120; j++)
	{
		for (i = 0; i < 300; i++)
		{
			test.at<Vec3b>(i, j) = (255, 0, 0);
		}
	}
	imshow("test", test);
	waitKey(0);
	return 0;
}*/
int main()
{
	Mat img1,img2;
	img1 = imread("img2.jpg", CV_LOAD_IMAGE_COLOR);
	namedWindow("image-dis", WINDOW_AUTOSIZE);
	int i = 0, j = 0;
	for (i = 0; i < img1.cols / 2; i++)
	{
		for (j = 0; j < img1.rows; j++)
		{
			img2.at<Vec3b>(img1.cols - 1 - j, i) = img1.at<Vec3b>(j, i);
		}
	}
	imshow("image-dis", img2);
	waitKey(0);
	return 0;
}
