#include<iostream>
#include<string>
#include "opencv2/opencv.hpp"
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
}
