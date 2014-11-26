#include "v3f.h"

//v3f::v3f()
//{
//}

v3f::v3f(const float a,const float b,const float c)              // constructeur facile a utiliser
{
    m_data[0]=a;
    m_data[1]=b;
    m_data[2]=c;
}

float operator*(const v3f& v1,const v3f& v2)  // dot product
{
    return v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2];
}

v3f operator^(const v3f& v1,const v3f& v2) // cross product
{

    float r1 =  v1[1]* v2[2] - v2[1]* v1[2];
    float r2 =  v1[2]* v2[0] - v2[2]* v1[0];
    float r3 =  v1[0]* v2[1] - v2[0]* v1[1];

    return v3f(r1,r2,r3);
}

v3f& v3f::operator=(const float& value)
{
    m_data[0] = value;
    m_data[1] = value;
    m_data[2] = value;
    return *this;
}
