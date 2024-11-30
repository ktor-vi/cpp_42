#include "../includes/Functions.tpp.cpp"
#include <iostream>

int main(void) {
  int a = 42;
  int b = 19;

  std::cout << "-----------Integers------------" << std::endl;
  std::cout << "a is : " << a << " - b is: " << b << std::endl;
  std::cout << "min is : " << min<int>(a, b) << std::endl;
  std::cout << "max is : " << max<int>(a, b) << std::endl;
  std::cout << "*SWAP*" << std::endl;
  swap(a, b);
  std::cout << "a is : " << a << " - b is: " << b << std::endl;

  float c = 1.116f;
  float d = 3.141f;

  std::cout << "-----------Floats--------------" << std::endl;
  std::cout << "c is : " << c << " - d is: " << d << std::endl;
  std::cout << "min is : " << min<float>(c, d) << std::endl;
  std::cout << "max is : " << max<float>(c, d) << std::endl;
  std::cout << "*SWAP*" << std::endl;
  swap(c, d);
  std::cout << "c is : " << c << " - d is: " << d << std::endl;

  char e = 'e';
  char f = 'f';
  std::cout << "-----------Chars---------------" << std::endl;
  std::cout << "e is : " << e << " - f is: " << f << std::endl;
  std::cout << "min is : " << min<char>(e, f) << std::endl;
  std::cout << "max is : " << max<char>(e, f) << std::endl;
  std::cout << "*SWAP*" << std::endl;
  swap(e, f);
  std::cout << "e is : " << e << " - f is: " << f << std::endl;
}
