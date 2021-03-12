#include<iostream>;
#include"charReco.h"
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

namespace Tsolpr {
	int charReco::charsSegment(Mat input, vector<Mat>& output, vector<Mat>& garyOutput)
	{
		if (input.data == nullptr) {
			return 0;
		}

		Mat inputGray;
		cvtColor(input, inputGray, COLOR_BGR2GRAY);

		return 0;
	}
}