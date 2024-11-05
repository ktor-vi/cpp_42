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

Fixed & Fixed::min(Fixed & n1, Fixed & n2){
  if(n1 <= n2)
    return n1;
  else
    return n2;
}

const Fixed & Fixed::min(const Fixed & n1, const Fixed & n2){
  if(n1 <= n2)
    return n1;
  else
    return n2;
}

Fixed & Fixed::max(Fixed & n1, Fixed & n2){
  if(n1 >= n2)
    return n1;
  else
    return n2;
}

const Fixed & Fixed::max(const Fixed & n1, const Fixed & n2){
  if(n1 >= n2)
    return n1;
  else
    return n2;
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if(this != &rhs)
    this->_raw = rhs.getRawBits();
  return *this;
}

bool Fixed::operator==(const Fixed& rhs) const{
  if (this->_raw == rhs._raw)
    return true;
  else 
    return false;
}
bool Fixed::operator<(const Fixed& rhs)const{

  if (this->_raw < rhs._raw)
    return true;
  else 
    return false;
}
bool Fixed::operator>(const Fixed& rhs)const{

  if (this->_raw > rhs._raw)
    return true;
  else 
    return false;
}
bool Fixed::operator<=(const Fixed& rhs)const{

  if (this->_raw <= rhs._raw)
    return true;
  else 
    return false;
}
bool Fixed::operator>=(const Fixed& rhs)const{

  if (this->_raw >= rhs._raw)
    return true;
  else 
    return false;
}
bool Fixed::operator!=(const Fixed& rhs)const{

  if (this->_raw != rhs._raw)
    return true;
  else 
    return false;
}


Fixed  Fixed::operator+(const Fixed &rhs)
{
  Fixed n;

  n.setRawBits(this->_raw + rhs._raw);
  return n;
}


Fixed  Fixed::operator-(const Fixed &rhs)
{
  Fixed n;

  n.setRawBits(this->_raw - rhs._raw);
  return n;
}

Fixed  Fixed::operator*(const Fixed &rhs)
{
  Fixed n;

  n.setRawBits((this->_raw * rhs._raw) >> this->_fixed);
  return n;
}


Fixed  Fixed::operator/(const Fixed &rhs)
{
  Fixed n;

  n.setRawBits((this->_raw * (1 << this->_fixed) / rhs._raw)  );
  return n;
}

void Fixed::operator++(void){
  this->_raw = this->_raw + (1 << this->_fixed);
}

void Fixed::operator--(void){
  this->_raw = this->_raw - (1 << this->_fixed);
}

void Fixed::operator++(int){
  this->_raw = this->_raw + (1 << this->_fixed);
}

void Fixed::operator--(int){
  this->_raw = this->_raw - (1 << this->_fixed);
}


std::ostream & operator<<(std::ostream & os, Fixed const & rhs){
  os << rhs.toFloat();
  return os;
}



