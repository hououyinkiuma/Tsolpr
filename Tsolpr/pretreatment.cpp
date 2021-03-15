#include<iostream>
#include<string>
#include "opencv2/opencv.hpp"
#include"basic_plate.h"
#include"sundry_function.h"
#include "Pretreatment.h"

using namespace std;
using namespace cv;

namespace Tsolpr {
	Pretreatment* Pretreatment::instance()
	{
		if (!_instance) {
			_instance = new Pretreatment;

		}

		return _instance;
	}
	int Pretreatment::PlateLocate(const Mat input, OutputArray& output)
	{
		vector<Plate>plates;
		Mat reszie_image = ImgResize(input);
		
		Pretreatment::instance()->ColorLocate();
		return 0;
	}
}
