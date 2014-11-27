#ifndef V3UC_H
#define V3UC_H

#include "vector.h"

typedef Vector<unsigned char,3> V3UC;

class v3uc: public V3UC
{
	public:

		v3uc();
		v3uc(const unsigned char a, const unsigned char b, const unsigned char c);                 // constructeur facile a utiliser

		v3uc& operator=(const unsigned char& value);
};

unsigned char operator*(const v3uc& v1,const v3uc& v2);  // dot product  mis en dehors pour faires des proto non membres, plus facile a ecrire/lire le code dans hpp
v3uc operator^(const v3uc& v1,const v3uc& v2);  // cross product






#endif // V3UC_H
