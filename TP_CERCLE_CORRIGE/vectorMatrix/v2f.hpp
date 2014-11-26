#include "v2f.h"

v2f::v2f()
{}

v2f::v2f(const float a,const float b)               // constructeur facile a utiliser
{
    m_data[0]=a;
    m_data[1]=b;
}

float operator*(const V2F& v1,const V2F& v2)  // dot product
{
    return v1[0] * v2[0] + v1[1] * v2[1];
}

// CROSS EN 2D, AUCUN SENS MATHEMATIQUE.

//v2f operator^(const v2f& v1,const v2f& v2)  // cross product
//{

//    return v2f( v1[1]*v2[0] - v2[1]*v1[0] ,
//                v1[0]*v2[1] - v2[0]*v1[1] );
//}
