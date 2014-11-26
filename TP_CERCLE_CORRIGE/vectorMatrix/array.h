#ifndef ARRAY_H
#define ARRAY_H

#include <ostream>
#include <algorithm>        // pour rajouter la fonction swap...


template <typename T, int N>
class Array
{
    protected:

        T* m_data;
        int m_size;


    public:

        static int s_nb;

        Array();
        Array(const Array& arr);

        ~Array();

        void fill(const T& t);  // pour tester uniquement, peu d'interet reel ici

        T& operator[](int i);
        T& operator[](int i) const;

        Array <T,N>& operator=(const Array <T,N> & arr);
        Array<T,N>& operator=(const T& t);
        // en fait cela s'averait necessaire de redefinir pour les types REFERENCé
        // mais pas pour les types de bases.

        bool operator==( const Array& ) const;

        void set_size(int i);
        int get_size() const;

        void print_array(); // sert pour des tests.



};
//template<typename T, int N>
//std::ostream & operator<<(std::ostream & stream, const Array<T,N> & arr);

#include "array.hpp"



#endif // ARRAY_H
