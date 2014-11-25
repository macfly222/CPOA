#ifndef VECTOR_H
#define VECTOR_H

template <typename T, int N>
class Vector : public Array<T,N>
{
    public:
        Vector();
//      Vector(const Vector& v);

        Vector<T,N> & operator+=(const Vector<T,N>& v);
        Vector<T,N> & operator+=(const T & t);

        Vector<T,N> & operator-=(const Vector<T,N>& v);
        Vector<T,N> & operator-=(const T & t);

        Vector<T,N> & operator*=(const Vector<T,N>& v);
        Vector<T,N> & operator*=(const T & t);

        Vector<T,N> & operator/=(const Vector<T,N>& v);
        Vector<T,N> & operator/=(const T & t);

        Vector<T,N> operator+(const Vector<T,N>& v);
        Vector<T,N> operator+(const T & t);

        Vector<T,N> operator-(const Vector<T,N>& v);
        Vector<T,N> operator-(const T & t);

        Vector<T,N> operator*(const Vector<T,N>& v);
        Vector<T,N> operator*(const T & t);

        Vector<T,N> operator/(const Vector<T,N>& v);  // il faut EMPECHER la div par ZERO
        Vector<T,N> operator/(const T & t);
};

template <typename T, int N>
Vector<T,N> operator+(const T& t, const Vector<T,N> & v);

template <typename T, int N>
Vector<T,N> operator-(const T& t, const Vector<T,N> v);

template <typename T, int N>
Vector<T,N> operator*(const T& t, const Vector<T,N> v);

template <typename T, int N>
Vector<T,N> operator/(const T& t, const Vector<T,N> v);


#include "vector.hpp"



#endif // VECTOR_H
