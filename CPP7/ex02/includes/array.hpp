#include <cstdlib>

template <typename T>
class Array{
private: 
  T* _ptr;
  size_t _size;
public:
  Array();
  Array(size_t size);
  Array(const Array &rhs);
  Array& operator=(const Array &rhs);
  ~Array(); 
  size_t size();
  T operator[](size_t index);

  class IndexOOBException : std::exception {
    char *what();
  }
};

