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

        // je faisais ici, V1*V2, on les considérant comme deux scalaires. pas d'erreur, mais intuitivement faux. C'est un dot product qu'il faut faire.
        // redéfinit dans V2F et V3F
        Vector<T,N> operator*(const T & t);

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
