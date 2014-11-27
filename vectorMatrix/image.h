#ifndef IMAGE_H
#define IMAGE_H

#include "array.h"


template<typename T,int D>
class Image{
	public:
		Image();
		Image(const Array<int, D>& size);
		Image(const Image& image);

		~Image();

		Image<T,D>& operator=(const Image<T,D>& image);

		const T* get_buff() const;
		const T& get_pixel(const Array<int, D> & coord) const;
		const T& get_pixel(int index) const;

		void set_pixel(const Array<int, D>& coord, const T& pixel );
		void set_pixel(int index, const T& pixel);
		void resize(const Array<int, D>& sizes);

		int get_pixelNumber() const;


	protected:
		T * m_buff;				// the image will be buffered here
		Array<int, D> m_sizes;			// size of each dimension  800, 800x600, 800x600x200... etc
		Array<int, D> m_precalcjump;    // allow to precalculate the jump to make between dimension to fasten the process of indexing a specific pixel
		int m_pixelNumber;
		int get_index(const Array<int,D>& coord) const;
};


#include "image.hpp"
#endif // IMAGE_H
