
#include "vectCalc.h"
#include <cassert>
#include <cmath>


float VectCalc::s_epsilon = 0.001;

VectCalc::VectCalc():
	VTF(3)
{
//    m_data[0] = 0.0f;
//    m_data[1] = 0.0f;
//    m_data[2] = 0.0f;
    zero();
}

VectCalc::VectCalc(int sz):
    VTF(sz)
{}

VectCalc::VectCalc(const VTF& vec):
    VTF(vec)
{}

float VectCalc::operator*(const VectCalc& vec) const
{
	assert(size() == vec.size());
	float res=0.0f;
	for (int i=0; i<m_size; ++i)
	{
//		res += this->operator[](i) * vec[i];
//		res += operator[](i) * vec[i];
		res += m_data[i] * vec[i];
	}
	return res;
}

VectCalc VectCalc::operator+(const VectCalc& vec) const
{
    assert(m_size == vec.size());

    VectCalc res(m_size);

    for (int i=0; i<m_size; ++i)
    {
        res[i] = m_data[i] + vec[i];
    }

    return res;
}

VectCalc VectCalc::operator-(const VectCalc& vec) const
{
    assert(m_size == vec.size());

    VectCalc res(m_size);

    for (int i=0; i<m_size; ++i)
    {
        res[i] = m_data[i] - vec[i];
    }

    return res;
}


VectCalc VectCalc::operator-() const
{
    VectCalc res(m_size);

    for (int i=0; i<m_size; ++i)
    {
        res[i] = - m_data[i];
    }

    return res;
}

bool VectCalc::operator==(const VectCalc& arr) const
{
    if (size() != arr.size())
        return false;

    for(int i=0; i< arr.size(); ++i)
        if (fabs(m_data[i] - arr[i]) >= s_epsilon)
            return false;

    return true;
}


VectCalc& VectCalc::operator*=(float f)
{

	for (int i=0; i<m_size; ++i)
	{
		m_data[i] *= f;
	}

	return *this;
}

VectCalc VectCalc::operator*(float f) const
{
	VectCalc res(m_size);

	for (int i=0; i<m_size; ++i)
	{
		res[i] = m_data[i] * f;
	}

	return res;
}



VectCalc operator*(float f, const VectCalc& v)
{
	return v*f;
}







VectCalc& VectCalc::operator+=(const VectCalc& v)
{
	assert(size() == v.size());

	for (int i=0; i<m_size; ++i)
	{
        m_data[i] += v[i];
	}

	return *this;
}

void VectCalc::zero()
{
	for (int i=0; i<m_size; ++i)
	{
		m_data[i] = 0.0f;
	}
}
