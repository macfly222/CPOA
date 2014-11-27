#ifndef IMAGE2GREY_H
#define IMAGE2GREY_H


#include "image2d.h"


typedef Image2D<unsigned char> I2G;

class Image2DGrey : public I2G
{
	public:

		Image2DGrey();

		// divide by 2 in a very linear way
		Image2D down_sample() const;

		// blur with a 2n +1 box average
		Image2DGrey blur(unsigned int n) const;

		//sobel?
		//Image2D<Vec2f> gradientSobel() const;

		// save to pgm...
		void save_PGM(const std::string& filename) const;

		// load from pgm...
		void load_PGM(const std::string& filename);

};

#endif // IMAGE2GREY_H
