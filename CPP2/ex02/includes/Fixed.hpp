#include <iostream>
#ifndef FIXED_HPP
#define FIXED_HPP
class Fixed {
private:
  int _raw;
  static const int _fixed = 8; 
public:
  Fixed(void);
  Fixed(const int n);
  Fixed(const float n);
  Fixed(const Fixed &rhs);
  
  ~Fixed(void);

  Fixed & operator=(const Fixed& rhs);

  bool operator==(const Fixed& rhs) const;
  bool operator<(const Fixed& rhs) const;
  bool operator>(const Fixed& rhs) const;
  bool operator<=(const Fixed& rhs) const;
  bool operator>=(const Fixed& rhs) const;
  bool operator!=(const Fixed& rhs) const;

  Fixed  operator+(const Fixed& rhs);
  Fixed  operator-(const Fixed& rhs);
  Fixed  operator*(const Fixed& rhs);
  Fixed  operator/(const Fixed& rhs);

  void  operator++(void);
  void  operator--(void);
  void  operator++(int);
  void  operator--(int);

  int getRawBits(void) const;
  void setRawBits(const int raw);
  float toFloat( void ) const;
  int toInt( void ) const;
  static Fixed &min(Fixed & n1, Fixed & n2);
  static const Fixed &min(const Fixed & n1, const Fixed & n2);
  static Fixed &max(Fixed & n1, Fixed & n2);
  static const Fixed &max(const Fixed & n1, const Fixed & n2);

};

std::ostream & operator<<(std::ostream& os, Fixed const & rhs);
#endif
