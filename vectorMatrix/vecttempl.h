#ifndef VECTTEMPL_H
#define VECTTEMPL_H

#include <iostream>
#include <fstream>
#include <cassert>


// La declaration de la classe
template <typename T>
class VectTempl
{
protected:
	// on remplace les "float" par des "T"
	T* m_data;
    int m_size;

    static int s_nb;

public:
    VectTempl();

    explicit VectTempl(int sz);

	VectTempl(const VectTempl& vec);

    ~VectTempl();

    int size() const;

    void resize(int sz);

    T& operator[](int i);

    T operator[](int i) const;

    bool operator==(const VectTempl& vec) const;

    static int nbObjects() { return s_nb; }

	T* data() { return m_data; }
};


template<typename T>
VectTempl<T>::VectTempl():
    m_data(NULL),
    m_size(0)
{
    s_nb++;
}

template<typename T>
VectTempl<T>::VectTempl(int sz):
    m_data(NULL),
    m_size(sz)
{
    m_data = new T[sz];
    s_nb++;
}

template<typename T>
VectTempl<T>::VectTempl(const VectTempl<T>& vec)
{
    assert(vec.m_size != 0);			// interdit la copie de Vecteur vide !

    m_size = vec.m_size;				// copie la nouvelle taille

    m_data = new T[vec.m_size];		// et on alloue a la bonne taille

    for (int i=0; i< m_size;++i)
        m_data[i] = vec.m_data[i];		// copie les données

    s_nb++;
}

template<typename T>
VectTempl<T>::~VectTempl()
{
    if (m_data!=NULL)
        delete[] m_data;

    s_nb--;
}



template<typename T>
int VectTempl<T>::size() const
{
    return m_size;
}

template<typename T>
void VectTempl<T>::resize(int sz)
{
    assert(sz != 0);

    float* data = new T[sz];		// tableau temporaire

    if (m_data != NULL)					// vec non vide ?
    {
        int s = std::min(m_size,sz);
        for (int i=0; i<s; ++i)			// copie les donnees dispo
            data[i] = m_data[i];
        delete[] m_data;				// desalloue les donnees
    }
    m_data = data;						// remplace les donnees par le tableau tempo
    m_size = sz;						// avec la taille
}

template<typename T>
T& VectTempl<T>::operator[](int i)
{
    assert((i>=0)&&(i<m_size));
    return m_data[i];
}

template<typename T>
T VectTempl<T>::operator[](int i) const
{
    assert((i>=0)&&(i<m_size));
    return m_data[i];
}

template<typename T>
bool VectTempl<T>::operator==(const VectTempl<T>& arr) const
{
    if (size() != arr.size())
        return false;

    for(int i=0; i< arr.size(); ++i)
        if (m_data[i] != arr[i])
            return false;

    return true;
}


template<typename T>
std::ostream& operator << (std::ostream& os, const VectTempl<T>& arr)
{
    assert(arr.size() != 0);
    os << arr[0];
    for(int i=1; i<arr.size();++i)
        os << " " << arr[i];
    return os;
}

template<typename T>
std::istream& operator >> (std::istream& is, VectTempl<T>& arr)
{
    for(int i=0; i< arr.size(); ++i)
        is >> arr[i];
    return is;
}


template<typename T>
int VectTempl<T>::s_nb = 0;

#endif // VECTTEMPL_H
