#include "../includes/array.hpp"

template <typename T>
Array<T>::Array()
{
    *this->_ptr = new T[0];
    *this->size = 0;
}

template <typename T>
Array<T>::Array(size_t size)
{
    *this->ptr = new T[size]() * this->size = size;
}

template <typename T>
Array<T>::Array(const Array &rhs)
{
    size_t len = rhs.size();
    *this->ptr = new T[len]() for (int i = 0; i < len; i++)
    {
        this->ptr[i] = rhs.ptr[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
    if (this != &rhs)
    {
        size_t len = rhs.size();
        *this->ptr = new T[len]() for (int i = 0; i < len; i++)
        {
            this->ptr[i] = rhs.ptr[i];
        }
    }
}

template <typename T>
char *Array<T>::IndexOOBException::what()
{
    return ("Index out of bounds !");
}

template <typename T>
T Array<T>::operator[](size_t index)
{
    if (index >= this->_size || index < 0)
        throw IndexOOBException;
    else
        return ptr[index];
}