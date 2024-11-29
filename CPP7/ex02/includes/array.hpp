#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
private:
  T *_ptr;
  size_t _size;

public:
  Array();
  Array(size_t size);
  Array(const Array &rhs);
  Array &operator=(const Array &rhs);
  ~Array();
  size_t size() const ;
  T &operator[](size_t index);

  class IndexOOBException : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };
};

template <typename T>
Array<T>::Array()
{
  this->_ptr = new T[0];
  this->_size = 0;
}

template <typename T>
Array<T>::~Array()
{
}
template <typename T>
Array<T>::Array(size_t size)
{
  this->_ptr = new T[size]();
  this->_size = size;
}

template <typename T>
size_t Array<T>::size() const
{
  return this->_size;
}
template <typename T>
Array<T>::Array(const Array &rhs)
{
  size_t len = rhs.size();
  this->_ptr = new T[len]();
  for (size_t i = 0; i < len; i++)
  {
    this->_ptr[i] = rhs._ptr[i];
  }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
  if (this != &rhs)
  {
    size_t len = rhs.size();
    this->_ptr = new T[len]();
    for (size_t i = 0; i < len; i++)
    {
      this->_ptr[i] = rhs._ptr[i];
    }
  }
}

template <typename T>
const char *Array<T>::IndexOOBException::what() const throw()
{
  return ("Index out of bounds !");
}

template <typename T>
T &Array<T>::operator[](size_t index)
{
  if (index >= this->_size)
    throw IndexOOBException();
  else
    return this->_ptr[index];
}
#endif