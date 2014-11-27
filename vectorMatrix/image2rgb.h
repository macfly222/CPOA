#ifndef IMAGE2RGB_H
#define IMAGE2RGB_H

#include "image2d.h"
#include "v3uc.h"



class Image2DRGB : public Image2D<v3uc> {
	public:
		Image2DRGB();
		void save_PPM( const std::string& filename) const;
		void load_PPM( const std::string& filename);

};

#endif // IMAGE2RGB_H
