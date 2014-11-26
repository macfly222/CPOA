#ifndef V3F_H
#define V3F_H


typedef Vector<float,3> V3F;

class v3f: public V3F
{
    public:

        v3f();
        v3f( const float a, const float b, const float c );                 // constructeur facile a utiliser
};

float operator*(const V3F& v1,const V3F& v2);  // dot product  mis en dehors pour faires des proto non membres, plus facile a ecrire/lire le code dans hpp
v3f operator^(const V3F& v1,const V3F& v2);  // cross product

#include "v3f.hpp"

#endif // V3F_H
