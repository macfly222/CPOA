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
    assert(arr.m_size != 0);
    m_size = arr.m_size;
    m_data = new T[arr.m_size];

    for (int i=0; i< m_size;++i)
        m_data[i] = arr.m_data[i];

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
void Array<T, N>::fill(const T& t)
{
    for (int i = 0; i < N; i++)
    {
        m_data[i] = t;
    }
}

template<typename T, int N>
T& Array<T,N>::operator[](int i)
{
    assert((i>=0)&&(i<m_size));
    return m_data[i];
}

template<typename T ,int N>
T& Array<T,N>::operator[](int i) const
{
    assert((i>=0)&&(i<m_size));
    return m_data[i];
}

template<typename T,int N>
void Array<T,N>::print_array()
{
    assert(N !=0);
    for(int i=0;i<N;++i)
        std::cout << "[" << m_data[i] << "]" << std::endl;
}

template<typename T,int N>
Array <T,N>& Array<T,N>::operator=(const Array<T,N>& arr)
{
    for(int i=0;i<N;++i)
        m_data[i] = arr[i];
    return *this;
}

template <typename T, int N>
Array<T,N>& Array<T,N>::operator=(const T& t)
{
    for (int i = 0; i < N; i++)
        m_data[i] = t;
    return *this;
}


template<typename T, int N>
bool Array<T,N>::operator==(const Array<T,N>& arr) const
{
    //assert inutile ici a cause du prototype
    for(int i=0;i<arr.get_size(); ++i)
        if (m_data[i] != arr[i])
            return false;

    return true;
}

template<typename T, int N>
void Array<T,N>::set_size(int i)
{
    m_size = i;
}

template<typename T, int N>
int Array<T,N>::get_size() const
{
    return m_size;
}

//template<typename T, unsigned int N>
//std::ostream & operator<<(std::ostream & stream, const Array<T,N> & arr)
//{
//    for (int i = 0; i < N; i++)
//    {
//        if (i) stream << " ";
//        stream << arr[i];
//    }

//    return stream;
//}


#endif  //ARRAY_HPP




