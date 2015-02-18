#ifndef PIPELINE_H
#define PIPELINE_H

#include "opencv2/imgproc/imgproc.hpp"

namespace pipeline
{
	int processImage(cv::Mat& img, std::vector<int>& bibNumbers);
}

#endif /* #ifndef PIPELINE_H */
