#include <iostream>
#include "../includes/Fixed.hpp"
int main( void ) {
  Fixed a(22.22f);
  Fixed b(42);
  Fixed c(42);

  if(a < b)
    std::cout << "< working" << std::endl;
  if(b > a)
    std::cout << "> working" << std::endl;
  if(b == c)
    std::cout << "== working" << std::endl;
  if(b >= c && b >= a)
    std::cout << ">= working" << std::endl;
  if(b >= c && a <= b)
    std::cout << ">= working" << std::endl;
  if(a != c)
    std::cout << "!= working" << std::endl;
  Fixed d;

  d = b + c;
  std::cout << "d is: " << d << std::endl;
  d = b - c;
  std::cout << "d is: " << d << std::endl;
  d = b * c;
  std::cout << "d is: " << d << std::endl;
  d = b / c;
  std::cout << "d is: " << d << std::endl;

  
  d--;
  std::cout << "d is: " << d << std::endl;
  d++;
  std::cout << "d is: " << d << std::endl;
  --d;
  std::cout << "d is: " << d << std::endl;
  ++d;
  std::cout << "d is: " << d << std::endl;

  std::cout << Fixed::max( a, b ) << std::endl;
  // Fixed a;
  // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  // std::cout << a << std::endl;
  // std::cout << ++a << std::endl;
  // std::cout << a << std::endl;
  // std::cout << a++ << std::endl;
  // std::cout << a << std::endl;
  // std::cout << b << std::endl;
  // std::cout << Fixed::max( a, b ) << std::endl;
  return 0;
}
