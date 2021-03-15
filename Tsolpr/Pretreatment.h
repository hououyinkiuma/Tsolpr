#pragma once
#include<iostream>
#include<string>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

namespace Tsolpr {
	class Pretreatment {
	public:
		Pretreatment() {};

		static Pretreatment* instance();

		int PlateLocate(const Mat input,OutputArray& output);

		int ColorLocate();


	private:
		static Pretreatment* _instance;
	};
}