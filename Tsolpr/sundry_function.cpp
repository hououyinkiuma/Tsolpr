#include "sundry_function.h"
#include<iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

Mat Tsolpr::ImgResize(const Mat input)
{
    Mat output;
    output.create(1080, 720, CV_8UC3);
    float widthscale = 1.0f;
    float heightscale = 1.0f;

    int defaultwidth = 1080;
    int defaultheight = 720;
    int inwidth = input.cols;
    int inheight = input.rows;

    if (inwidth <= defaultwidth && inheight <= defaultheight) {
        resize(input, output, output.size(), 0, 0, INTER_LINEAR);
    }
    if (inwidth <= defaultwidth && inheight > defaultheight) {
        Size dsize1 = Size(round(1080), round(inheight));
        resize(input, output, dsize1, 0, 0, INTER_LINEAR);
        Size dsize2 = Size(round(1080), round(720));
        resize(output, output, dsize2, 0, 0, INTER_AREA);
    }
    if(inwidth >=defaultwidth && inheight < defaultheight){
        Size dsize1 = Size(round(1024), round(inheight));
        resize(input, output, dsize1, 0, 0, INTER_AREA);
        Size dsize2 = Size(round(1024), round(720));
        resize(output, output, dsize2, 0, 0, INTER_LINEAR);
    }
    if (inwidth > defaultwidth && inheight > defaultheight) {
        resize(input, output, output.size(), 0, 0, INTER_AREA);
    }

    return output;
}
