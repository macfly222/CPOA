#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T, int N> int Array<T,N>::s_nb = 0;

template<typename T, int N>
Array<T,N>::Array():
    m_data(new T[N]),
    m_size(N)
    {
        s_nb++;
    }


template<typename T, int N>
Array<T,N>::Array(const Array<T,N> & arr):
m_data(NULL),
m_size(0)
{
    assert(arr.m_size != 0);			// interdit la copie de Vecteur vide !

    m_size = arr.m_size;				// copie la nouvelle taille
    m_data = new T[arr.m_size];         // et on alloue a la bonne taille

    for (int i=0; i< m_size;++i)
        m_data[i] = arr.m_data[i];		// copie les données

    s_nb++;
}

template<typename T, int N>
Array<T,N>::~Array()
{
    if (m_data!=NULL)
        delete[] m_data;
    s_nb--;
}

template<typename T, int N>
T& Array<T,N>::operator[](int i)
{
    assert((i>=0)&&(i<m_size));
    return m_data[i];
}

template<typename T ,int N>
const T& Array<T,N>::operator[](int i) const
{
    assert((i>=0)&&(i<m_size));
    return m_data[i];
}

template<typename T,int N>
void Array<T,N>::print_array()
{
    assert(m_size != 0);
    for(int i=0;i<N;++i)
        std::cout << "[" << m_data[i] << "]" << std::endl;
}

template<typename T,int N>
Array <T,N>& Array<T,N>::operator=(const Array<T,N>& arr)
{
    assert(size() == arr.m_size);
    for(int i=0;i<N;++i)
        m_data[i] = arr[i];
    return *this;
}

template<typename T, int N>
bool Array<T,N>::operator==(const Array<T,N>& arr) const
{
    assert(size() == arr.size());

    for(int i=0;i<arr.size(); ++i)
        if (m_data[i] != arr[i])
            return false;

    return true;
}

template<typename T, int N>
const int Array<T,N>::size() const
{
    return m_size;
}

//template<typename T, int N>
//int Array<T,N>::size()
//{
//    return m_size;
//}

//template<typename T>
//void VectTempl<T>::resize(int sz)
//{
//    assert(sz != 0);

//    float* data = new T[sz];		// tableau temporaire

//    if (m_data != NULL)					// vec non vide ?
//    {
//        int s = std::min(m_size,sz);
//        for (int i=0; i<s; ++i)			// copie les donnees dispo
//            data[i] = m_data[i];
//        delete[] m_data;				// desalloue les donnees
//    }
//    m_data = data;						// remplace les donnees par le tableau tempo
//    m_size = sz;						// avec la taille
//}





//template<typename T>
//std::ostream& operator << (std::ostream& os, const VectTempl<T>& arr)
//{
//    assert(arr.size() != 0);
//    os << arr[0];
//    for(int i=1; i<arr.size();++i)
//        os << " " << arr[i];
//    return os;
//}

//template<typename T>
//std::istream& operator >> (std::istream& is, VectTempl<T>& arr)
//{
//    for(int i=0; i< arr.size(); ++i)
//        is >> arr[i];
//    return is;
//}


//template<typename T>
//int VectTempl<T>::s_nb = 0;

#endif  //ARRAY_HPP




