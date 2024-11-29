#include <iostream>

template <typename T, typename U, typename V>
void iter(T *addr, U len, V f){
  for (U i = 0; i < len; i++)
  {
    f(*addr);
    addr++;
  }
}

template <typename T>
void printEl(T x)
{
  std::cout << x << std::endl;
}
