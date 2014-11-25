#include "vector.h"

template <typename T, int N>
Vector<T,N>::Vector() : Array<T,N>()
{
}

//template <typename T, int N>    // apres test, non necessaire pour la construction par copie. Ce qui est plutot logique, on appel celui de array.
//Vector<T,N>::Vector(const Vector<T,N>& v) : Array<T,N>(v)
//{
//}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator+=(const Vector<T,N>& v)
{
    for (int i = 0; i<N; i++)
    {
        (*this)[i] += v[i];
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator+=(const T& t)
{
    for(int i=0;i<N;i++)
    {
        (*this)[i] += t;
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator-=(const Vector<T,N>& v)
{
    for (int i = 0; i<N; i++)
    {
        (*this)[i] -= v[i];
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator-=(const T& t)
{
    for (int i = 0; i<N; i++)
    {
        (*this)[i] -= t;
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator*=(const Vector<T,N>& v)
{
    for (int i=0;i<N;i++)
    {
        (*this)[i] *= v[i];
    }
    return *this;
}


template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator*=(const T& t)
{
    for (int i=0;i<N;i++)
    {
        (*this)[i] *= t;
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator/=(const Vector<T,N>& v)
{
    for(int i=0;i<N;i++)
    {
        assert(v[i] != 0); // on empeche la div par zero
        (*this)[i] /= v[i];
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> & Vector<T,N>::operator/=(const T& t)
{
    assert(t != 0);      // on empeche la div par zero
    for(int i=0;i<N;i++)
    {
        (*this)[i] /= t;
    }
    return *this;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator+(const Vector<T,N>& v)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] + v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator+(const T& t)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] + t;
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator-(const Vector<T,N>& v)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] - v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator-(const & t)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] - t;
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator*(const Vector<T,N> & v)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] * v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator*(const T & t)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] * t;
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator/(const Vector<T,N> & v)  // il faut EMPECHER la div pa ZERO
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        assert(v[i] != 0);
        v2[i] = (*this)[i] / v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> Vector<T,N>::operator/(const T & t)
{
    assert(t != 0);
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] = (*this)[i] / t;
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> operator+(const T & t, const Vector<T,N> & v)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] =  t + v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> operator-(const T & t, const Vector<T,N> v)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] =  t - v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> operator*(const T & t, const Vector<T,N> v)
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        v2[i] =  t * v[i];
    }
    return v2;
}

template <typename T, int N>
Vector<T,N> operator/(const T & t, const Vector<T,N> v)  // ATTENTION DIV PAR ZERO
{
    Vector<T, N> v2;
    for (int i=0;i<N;i++)
    {
        assert(v[i] != 0!= 0);
        v2[i] =  t / v[i];
    }
    return v2;
}
