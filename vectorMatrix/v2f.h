#ifndef V2F_H
#define V2F_H

#include "vector.h"

typedef Vector<float,2> V2F;

class v2f: public V2F
{
    public:

        v2f();
        v2f(const float a,const float b);                 // constructeur facile a utiliser

        v2f& operator=(const float& value);
};

float operator*(const v2f& v1,const v2f& v2);  // dot product  mis en dehors pour faires des proto non membres, plus facile a ecrire/lire le code dans hpp
//v2f operator^(const V2F& v1,const V2F& v2);  // cross product



#include "v2f.hpp"

#endif // V2F_H
