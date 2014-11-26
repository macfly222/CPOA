#include "matrix33f.h"
#include <cmath>

//
// CONSTRUCTOR
//
matrix33f::matrix33f()
{
}

matrix33f::matrix33f(const float value)  // permet d'autre test, plus facilement, ID par exemple
{
    m_column[0][0] = value;
    m_column[1][1] = value;
    m_column[2][2] = value;
}

matrix33f::matrix33f(   const float m11, const float m21, const float m31,
                        const float m12, const float m22, const float m32,
                        const float m13, const float m23, const float m33)// constructeur nécessaire pour faciliter les tests. ordre des valeurs par lignes
{
    m_column[0][0] = m11;
    m_column[0][1] = m12;
    m_column[0][2] = m13;
    m_column[1][0] = m21;
    m_column[1][1] = m22;
    m_column[1][2] = m23;
    m_column[2][0] = m31;
    m_column[2][1] = m32;
    m_column[2][2] = m33;
}

matrix33f::matrix33f(const column& c1, const column& c2, const column& c3)
{
    m_column[0] = c1;
    m_column[1] = c2;
    m_column[2] = c3;
}

//
// ACCESSOR
//
const column& matrix33f::operator[](int i) const
{
    return m_column[i];
}

column& matrix33f::operator[](int i)
{
    return m_column[i];
}


//
// LOGICAL
//
bool matrix33f::operator==(const matrix33f& m)
{
    return (m_column[0] == m[0] && m_column[1] == m[1] && m_column[2] == m[2]);  // ira dans array::ope==
}
bool matrix33f::operator!=(const matrix33f& m)
{
    return (m_column[0] != m[0] || m_column[1] != m[1] || m_column[2] != m[2]);  // ira dans array::ope!=
}


//
// ARITHMETICAL
//
float matrix33f::det()
{
    float det;
    return det =
    m_column[0][0] * (m_column[1][1] * m_column[2][2] - m_column[2][1] * m_column[1][2])
    -m_column[1][0] * (m_column[0][1] * m_column[2][2] - m_column[2][1] * m_column[0][2])
    +m_column[2][0] * (m_column[0][1] * m_column[1][3] - m_column[1][1] * m_column[0][2]);
}


//
// AFFECTATION
//
matrix33f& matrix33f::operator=(const matrix33f& m)
{
    if((*this) == m)
    {
        return *this; // cas M1 = M1 = M1... pas la peine de faire les affectations.
    }
    m_column[0] = m[0];
    m_column[1] = m[1];
    m_column[2] = m[2];
    return *this;
}

matrix33f& matrix33f::operator=(const float& value)
{
    m_column[0] = value;
    m_column[1] = value;
    m_column[2] = value;
    return *this;
}


//
// TRANSFORMATION
//
matrix33f matrix33f::inverse()
{
    float det = this->det();
    matrix33f inverse(
            (m_column[1][1] * m_column[2][2] - m_column[2][1] * m_column[1][2]) / det,
            (m_column[1][2] * m_column[2][0] - m_column[2][2] * m_column[1][0]) / det,
            (m_column[1][0] * m_column[2][1] - m_column[2][0] * m_column[1][1]) / det,
            (m_column[0][2] * m_column[2][1] - m_column[0][1] * m_column[2][2]) / det,
            (m_column[0][0] * m_column[2][2] - m_column[0][2] * m_column[2][0]) / det,
            (m_column[0][1] * m_column[2][0] - m_column[0][0] * m_column[2][1]) / det,
            (m_column[1][2] * m_column[0][1] - m_column[1][1] * m_column[0][2]) / det,
            (m_column[1][0] * m_column[0][2] - m_column[1][2] * m_column[0][0]) / det,
            (m_column[1][1] * m_column[0][0] - m_column[1][0] * m_column[0][1]) / det) ;

    return inverse;
}

void matrix33f::set_translate(v2f& v)
{
   m_column[0][0] = 1;
   m_column[0][1] = 0;
   m_column[0][2] = 0;
   m_column[1][0] = 0;
   m_column[1][1] = 1;
   m_column[1][2] = 0;
   m_column[2][0] = v[0];
   m_column[2][1] = v[1];
   m_column[2][2] = 1;
}

void matrix33f::apply_translate(v2f& v)
{
   for(int i=0;i<3;i++)
   {
       (*this).m_column[2][i] += (* this).m_column[0][i] * v[0] + (*this).m_column[1][i] * v[1];
   }
}

void matrix33f::set_scale(v2f& v)
{
    m_column[0][0] = v[0];
    m_column[0][1] = 0;
    m_column[0][2] = 0;
    m_column[1][0] = 0;
    m_column[1][1] = v[1];
    m_column[1][2] = 0;
    m_column[2][0] = 0;
    m_column[2][1] = 0;
    m_column[2][2] = 1;
}

void matrix33f::apply_scale(v2f& v)
{
    for(int i=0;i<3;i++)
    {
        (* this).m_column[0][i] *= v[0];
        (* this).m_column[1][i] *= v[1];
    }
}

void matrix33f::set_rotate(const float theta)
{
    m_column[0] = v3f(cos(theta),  sin(theta), 0);
    m_column[1] = v3f(-sin(theta), cos(theta), 0);
    m_column[2] = v3f(0,0,1);
}

void matrix33f::apply_rotate(const float theta)
{
    float m11 = (cos(theta) * m_column[0][0]) - (sin(theta) * m_column[1][0]);
    float m21 = (cos(theta) * m_column[0][1]) - (sin(theta) * m_column[1][1]);
    float m31 = (cos(theta) * m_column[0][2]) - (sin(theta) * m_column[1][2]);
    float m12 = (sin(theta) * m_column[0][0]) + (cos(theta) * m_column[1][0]);
    float m22 = (sin(theta) * m_column[0][1]) + (cos(theta) * m_column[1][1]);
    float m32 = (sin(theta) * m_column[0][2]) + (cos(theta) * m_column[1][2]);
    m_column[0] = v3f(m11, m21, m31);
    m_column[1] = v3f(m12, m22, m32);
}




//
// NON MEMBER
//
matrix33f& operator*(const matrix33f& m1, const matrix33f& m2)
{
    matrix33f res;

    res[0][0] = m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1] + m1[2][0] * m2[0][2];
    res[0][1] = m1[0][1] * m2[0][0] + m1[1][1] * m2[0][1] + m1[2][1] * m2[0][2];
    res[0][2] = m1[0][2] * m2[0][0] + m1[1][2] * m2[0][1] + m1[2][2] * m2[0][2];
    res[1][0] = m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1] + m1[2][0] * m2[1][2];
    res[1][1] = m1[0][1] * m2[1][0] + m1[1][1] * m2[1][1] + m1[2][1] * m2[1][2];
    res[1][2] = m1[0][2] * m2[1][0] + m1[1][2] * m2[1][1] + m1[2][2] * m2[1][2];
    res[2][0] = m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1] + m1[2][0] * m2[2][2];
    res[2][1] = m1[0][1] * m2[2][0] + m1[1][1] * m2[2][1] + m1[2][1] * m2[2][2];
    res[2][2] = m1[0][2] * m2[2][0] + m1[1][2] * m2[2][1] + m1[2][2] * m2[2][2];

    return res;
}

column& operator*(const matrix33f& m, const column& c)
{
    column res;

    res[0] = m[0][0] * c[0] + m[1][0] * c[1] + m[2][0] * c[2];
    res[1] = m[0][1] * c[0] + m[1][1] * c[1] + m[2][1] * c[2];
    res[2] = m[0][2] * c[0] + m[1][2] * c[1] + m[2][2] * c[2];

    return res;
}




