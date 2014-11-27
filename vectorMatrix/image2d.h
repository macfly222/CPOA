#ifndef IMAGE2D_H
#define IMAGE2D_H

#include "image.h"


template<typename T>
class Image2D : public Image<T,2>
{
	public:
		Image2D();
		Image2D(int width, int height);  // constructeur plus classique: 800x600

		const T& get_pixel(int x, int y) const;  //idem pour get & set
		int get_width() const;
		int get_height() const;
		void set_pixel(int x, int y, const T& pixel);

		void resize(int width, int height);  // resize avec une résolution d'image donnée.
		void threshold(const T& pixel);

	protected:
		int get_index(int x, int y) const;
};

#include "image2d.hpp"

#endif // IMAGE2D_H
