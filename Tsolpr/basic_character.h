#pragma once
#include<iostream>
#include<string>
#include "opencv2/opencv.hpp"

using namespace cv;

namespace Tsolpr {

    class Character {
        public:
            Character()
            {
                _Image = Mat();
                _GrayImage = Mat();
                _Center = Point(0, 0);
                _Rect = Rect();
                _Content = "";
                _Confidence = 0;
                _IsChinese = false;   
            }

            Character(const Character& other)
            {
                _Image = other._Image;
                _GrayImage = other._GrayImage;
                _Center = other._Center;
                _Rect = other._Rect;
                _Content = other._Content;
                _Confidence = other._Confidence;
                _IsChinese = other._IsChinese;
            }

            Character& operator=(const Character& other) {
                if (this != &other) {
                    _Image = other._Image;
                    _GrayImage = other._GrayImage;
                    _Center = other._Center;
                    _Rect = other._Rect;
                    _Content = other._Content;
                    _Confidence = other._Confidence;
                    _IsChinese = other._IsChinese;
                }
                return *this;
            }

            inline void setImage(Mat temp) { _Image = temp; }
            inline Mat getImage() const { return _Image; }

            inline void setGrayImage(Mat temp) { _GrayImage = temp; }
            inline Mat getGrayImage() const { return _GrayImage; }

            inline void setCenter(Point temp) { _Center = temp; }
            inline Point getCenter() const { return _Center; }

            inline void setRect(Rect temp) { _Rect = temp; }
            inline Rect getRect() const { return _Rect; }

            inline void setContent(String temp) { _Content = temp; }
            inline String getContent() const { return _Content; }

            inline void setConfidence(double temp) { _Confidence = temp; }
            inline double getConfidence() const { return _Confidence; }

            inline void setIsChinese(bool temp) { _IsChinese = temp; }
            inline bool getIsChinese() const { return _IsChinese; }

        private:
            Mat _Image;

            Mat _GrayImage;

            Point _Center;

            Rect _Rect;

            String _Content;

            double _Confidence;

            bool _IsChinese;

    };

}