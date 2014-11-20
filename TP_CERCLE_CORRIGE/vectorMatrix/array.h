#ifndef ARRAY_H
#define ARRAY_H

template <typename T, int N>
class Array
{
    protected:

        T* m_data;
        int m_size;


    public:
        static int s_nb;

        Array();

        ~Array();

        Array(const Array& arr);

        T& operator[](int i);

        const T& operator[](int i) const;

        Array <T,N>& operator=(const Array <T,N> & arr);

        bool operator==(const Array& ) const;

        const int size() const;

        //int size();

        void print_array(); // sert principalement pour des tests.


//        void resize(int sz);




//        static int nbObjects() { return s_nb; }

//        T* data() { return m_data; }
};


#include "array.hpp"



#endif // ARRAY_H
