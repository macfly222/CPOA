#include "image2d.h"

template<typename T>
Image2D<T>::Image2D():Image<T,2>()
{}

template<typename T>
Image2D<T>::Image2D(int width, int height):Image<T,2>() // constructeur plus classique: 800x600
{
	resize(width,height);
}


template<typename T>
const T& Image2D<T>::get_pixel(int x, int y) const  //idem pour get & set
{
	return this->m_buff[get_index(x,y)];
}


template<typename T>
int Image2D<T>::get_width() const
{
	return this->m_sizes[0];
}


template<typename T>
int Image2D<T>::get_height() const
{
	return this->m_sizes[1];
}

template<typename T>
void Image2D<T>::set_pixel(int x, int y, const T& pixel)
{
	this->m_buff[get_index(x,y)] = pixel;
}

template<typename T>
void Image2D<T>::resize(int width, int height)  // resize avec une résolution d'image donnée.
{
	this->m_pixelNumber = width * height;
	this->m_sizes[0] = width;
	this->m_sizes[1] = height;
	if (this->m_pixelNumber)   // >0 !
	{
		this->m_buff = new T[this->m_pixelNumber];
	}
	else
	{
		this->m_buff = NULL;
	}
}



template<typename T>
int Image2D<T>::get_index(int x, int y) const
{
	return x + y*this->m_sizes[0];
}


template<typename T>
void Image2D<T>::threshold(const T& pixel)
{
	for (int i = 0; i <get_pixel(); i++)
	{
		if (this -> get_pixel(i) < pixel)
			this -> set_pixel(i, pixel);
	}
}
