#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include"opencv2/opencv.hpp"
namespace Tsolpr {
	class utils {
	public:
		static  std::string get_file_name(const std::string& path);

		static std::vector<std::string> get_files(const std::string& path);

		static std::string ConvertUtf8ToGBK(const char* strUtf8);

	};

}