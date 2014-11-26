#ifndef V3F_H
#define V3F_H

#include "vector.h"

typedef Vector<float,3> V3F;

class v3f: public V3F
{
    public:

        v3f();
        v3f( const float a, const float b, const float c );                 // constructeur facile a utiliser

        v3f& operator=(const float& value);
};

float operator*(const v3f& v1,const v3f& v2);  // dot product  mis en dehors pour faires des proto non membres, plus facile a ecrire/lire le code dans hpp
v3f operator^(const v3f& v1,const v3f& v2);  // cross product






#endif // V3F_H
