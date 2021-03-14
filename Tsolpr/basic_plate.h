#pragma once
#include"basic_character.h"
#include "opencv2/opencv.hpp"
namespace Tsolpr {

    class Plate {
    public:
        Plate() {
            _Confidence = -1;
            _Content = "";
            _Check = 0;
        }

        Plate(const Plate& other) {
            _Image = other._Image;
            _GaryImage = other._GaryImage;
            _Rect = other._Rect;
            _Content = other._Content;
            _Confidence = other._Confidence;
            _Check = other._Check;
        }

        Plate& operator=(const Plate& other) {
            if (this != &other) {
                _Image = other._Image;
                _GaryImage = other._GaryImage;
                _Rect = other._Rect;
                _Content = other._Content;
                _Confidence = other._Confidence;
                _Check = other._Check;
            }
            return *this;
        }

        inline void setImage(Mat temp) { _Image = temp; }
        inline Mat getImage() const { return _Image; }

        inline void setGaryImage(Mat temp) { _Image = temp; }
        inline Mat getGaryImage() const { return _Image; }

        inline void setRect(RotatedRect temp) { _Rect = temp; }
        inline RotatedRect getRect() const { return _Rect; }

        inline void setContent(String temp) { _Content = temp; }
        inline String getContent() const { return _Content; }

        inline void setConfidence(double temp) { _Confidence = temp; }
        inline double getConfidence() const { return _Confidence; }

        inline void setCheck(double temp) { _Check = temp; }
        inline double getCheck() const { return _Check; }

    private:
        Mat _Image;

        Mat _GaryImage;

        RotatedRect _Rect;

        String _Content;

        double _Confidence;

        int _Check;
    };
}