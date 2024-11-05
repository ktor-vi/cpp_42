#include "../includes/Fixed.hpp"
#include <cmath>

Fixed::Fixed(void){
  std::cout << "Default constructor called" << std::endl;
  this->_raw = 0;
}

Fixed::~Fixed(void){
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs){
  std::cout << "Copy constructor called" << std::endl;
  *this = rhs;
}

Fixed::Fixed(const int n){
  std::cout << "Int constructor called" << std::endl;
  this->_raw = n << this->_fixed;
}

Fixed::Fixed(const float n){
  std::cout << "Float constructor called" << std::endl;
  this->_raw = roundf(n * (1 << this->_fixed));
}
int Fixed::getRawBits(void) const{
  return this->_raw ;
}

float Fixed::toFloat(void) const{
    return static_cast<float>(this->_raw) / (1 << this->_fixed);
}

int Fixed::toInt(void) const{
  return (this->_raw >> this->_fixed);
}
void Fixed::setRawBits(const int raw){
  this->_raw = raw;
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if(this != &rhs)
    this->_raw = rhs.getRawBits();
  return *this;
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs){
  os << rhs.toFloat();
  return os;
}

