#include "imgGradient.h"



const int GradientSobel::Sobel5x[25]={1,2,0,-2,-1,
									  4,8,0,-8,-4,
									  6,12,0,-12,-6,
									  4,8,0,-8,-4,
									  1,2,0,-2,-1};

const int GradientSobel::Sobel5y[25]={1, 4, 6, 4, 1,
									  2, 8, 12, 8, 2,
									  0, 0, 0, 0, 0,
									  -2,-8,-12,-8,-2,
									  -1,-4,-6,-4,-1};


Image2<Vec2f> GradientSobel::gradient33(const Image2grey& img_in)
{
}



Image2<Vec2f> GradientSobel::gradient55(const Image2grey& img_in)
{
}


