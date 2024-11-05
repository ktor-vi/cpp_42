#include "../includes/Fixed.hpp"
#include <iostream>

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

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return this->_raw;
}

void Fixed::setRawBits(const int raw){
  std::cout << "setRawBits member function called" << std::endl;
  this->_raw = raw;
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if(this != &rhs)
    this->_raw = rhs.getRawBits();
  return *this;
}

