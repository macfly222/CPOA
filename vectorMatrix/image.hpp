#include "image.h"

template<typename T,int D>
Image<T,D>::Image():
m_buff				(NULL)
{
	m_sizes = 0;  // appelle l'affectation de array.  Met 0 partout.
	m_precalcjump = 0;
}

template<typename T,int D>
Image<T,D>::Image(const Array<int, D>& size):
m_buff				(NULL)
{
	resize(sizes);
	//m_precalcjump = 0;   // fait dans resize.
}

template<typename T,int D>
Image<T,D>::Image(const Image& image):
//m_buff				(image.m_buff),  // besoin d'allouer l'espace. Pour ca, besoin de image.m_sizes.
//m_sizes				(image.m_sizes), // on peut allouer ici, ou l'allouer dans "resize", qui etre appeler de toute facon.
//m_precalcjump		(image.m_precalcjump)// idem.
{
	resize(image.m_sizes);
	m_buff = image.m_buff;  // on aurait pu utiliser l'affection pour construire. Mais contre intuitif
}

template<typename T,int D>
~Image()
{
	delete [] m_buff;
}

template<typename T,int D>
Image<T,D>::resize(const Array<int, D>& sizes)
{
	if(D)
	{
		m_precalcjump[0] = 1;				// if image = dimension > 0
		m_pixelNumber = 1;
	}
	else
	{
		m_pixelNumber = 0;
	}

	for(int i=0;i<D;i++)
	{
		m_size[i] = sizes[i];
		m_pixelNumber *= sizes[i];
		if(i)
		{
			m_precalcjump[i] = m_precalcjump[i-1] * m_sizes[i-1];  // permet d'avoir le jump, sans avoir a re-multiplier toutes les tailles a chaque accès aux données. pour accèder a la dimension 3 par exemple on utiliserait precalcjump[2]
		}
	}

	delete [] m_buff;

	if(this->m_pixelNumber)
	{
		m_buff = new T[m_pixelNumber];  //on recrée après avoir détruit, pour empecher les fuites de memoire
	}
	else
	{
		m_buff = NULL;  // recrée a null le cas échéant
	}
}

template<typename T,int D>
Image<T,D>& Image<T,D>::operator=(const Image<T,D>& image)
{
	m_sizes			= image.m_sizes;
	m_precalcjump	= image.m_precalcjump;
	m_pixelNumber	= image.m_pixelNumber;

	// on détruit et on réalloue. sinon fuite mémoire.
	delete [] m_buff;
	m_buffer = new T[m_pixelNumber];

	// on copie la mémoire.
	memcpy(m_buff, image.m_buff, m_pixelNumber * sizeof(T));

	return *this;
}


template<typename T,int D>
const T* Image<T,D>::get_buff() const
{
	return m_buff;
}


template<typename T,int D>
int Image<T,D>::get_pixelNumber() const
{
	return m_pixelNumber;
}


template<typename T,int D>
const T& Image<T,D>::get_pixel(const Array<int, D>& coord) const
{
	return getPixel(get_index(coord));
}


template<typename T,int D>
const T& Image<T,D>::get_pixel(int index ) const
{
	return m_buff[index];
}

template<typename T,int D>
int Image<T,D>::get_index(const Array<int,D>& coord) const
{
	int index = 0;
	for (int i=0;i<D;i++)
	{
		index += coord[i] * m_precalcjump[i];
	}
	return index;
}

template<typename T,int D>
void Image<T,D>::set_pixel(const Array<int, D>& coord, const T& pixel )
{
	set_pixel(get_index(coord)) = pixel;
}

template<typename T,int D>
void Image<T,D>::set_pixel(int index, const T& pixel)
{
	m_buff[index] = pixel;
}



