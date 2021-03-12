#pragma once
#include<iostream>;
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

namespace Tsolpr {
	class charReco {
	public:
		charReco();

		~charReco();

		int charsSegment(Mat input,vector<Mat>& output,vector<Mat>& garyOutput);

	};
}