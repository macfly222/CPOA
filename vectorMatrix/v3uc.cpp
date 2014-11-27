#include "v3uc.h"

v3uc::v3uc()
{
}

v3uc::v3uc(const unsigned char a,const unsigned char b,const unsigned char c)              // constructeur facile a utiliser
{
	m_data[0]=a;
	m_data[1]=b;
	m_data[2]=c;
}

unsigned char operator*(const v3uc& v1,const v3uc& v2)  // dot product
{
	return v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2];
}

v3uc operator^(const v3uc& v1,const v3uc& v2) // cross product
{

	unsigned char r1 =  v1[1]* v2[2] - v2[1]* v1[2];
	unsigned char r2 =  v1[2]* v2[0] - v2[2]* v1[0];
	unsigned char r3 =  v1[0]* v2[1] - v2[0]* v1[1];

	return v3uc(r1,r2,r3);
}

v3uc& v3uc::operator=(const unsigned char& value)
{
	m_data[0] = value;
	m_data[1] = value;
	m_data[2] = value;
	return *this;
}
