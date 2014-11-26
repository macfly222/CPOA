#ifndef MATRIX33F_H
#define MATRIX33F_H

#include "v2f.h"
#include "v3f.h"
typedef v3f column;

class matrix33f
{
    public:

        //constructor
        matrix33f();
        matrix33f(const float value);
        matrix33f(  const float m11, const float m21, const float m31,
                    const float m12, const float m22, const float m32,
                    const float m13, const float m23, const float m33);  //constructor need to ease test
        matrix33f(const v3f& c1, const v3f& c2, const v3f& c3);          // idem


        // accessor
        const column & operator[](int i) const;
        column& operator[](int i);


        // logical
        bool operator==(const matrix33f& m);
        bool operator!=(const matrix33f& m);


        // arithmetical
        float det();



        // affectation
        matrix33f& operator=(const matrix33f& m);
        matrix33f& operator=(const float& value);


        // transformation
        matrix33f inverse();

        void set_translate(v2f& v);
        void apply_translate(v2f& v);

        void set_scale(v2f& v);
        void apply_scale(v2f& v);

        void set_rotate(const float theta);
        void apply_rotate(const float theta);

        // members
        column m_column[3];
};

matrix33f& operator*(const matrix33f& m1, const matrix33f& m2);
column& operator*(const matrix33f& m, const column& c);

#endif // MATRIX33F_H
