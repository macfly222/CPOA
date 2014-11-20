#ifndef __VECTCALC__
#define __VECTCALC__


#include "vecttempl.h"

// definition du type de base pour simplifier l'ecriture
typedef VectTempl<float> VTF;

//penser a remplacer partout le VecteurNF en VTF !


class VectCalc: public VTF
{
public:
	// epsilon en static public pour etre modifiable depuis l'exterieur
    static float s_epsilon;

	VectCalc();

    VectCalc(int sz);

    VectCalc(const VTF& vec);

    float operator*(const VectCalc& vec) const;

    VectCalc operator+(const VectCalc& vec) const;

    VectCalc operator-(const VectCalc& vec) const;

    VectCalc operator-() const;

    bool operator==(const VectCalc& arr) const;


	VectCalc& operator*=(float f);

    // OPERATEUR * membre de la classe pour v*f
	VectCalc operator*(float f) const;

	VectCalc& operator+=(const VectCalc& v);

    // initialise le vecteur avec des zero
	void zero();

	template <typename FUNC>
	void apply(FUNC f);

};

// OPERATEUR * exterieur a la classe pour f*v
VectCalc operator*(float f, const VectCalc& v);

template <typename FUNC>
void VectCalc::apply(FUNC f)
{
	for (int i=0; i< m_size; ++i)
		 m_data[i] = f(m_data[i]);
}


#endif
