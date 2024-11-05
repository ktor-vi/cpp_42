#ifndef FIXED_HPP
#define FIXED_HPP
class Fixed {
  private:
    int _raw;
    static const int _fixed = 8; 
  public:
    Fixed(void);
    Fixed(const Fixed &rhs);
    ~Fixed(void);
    Fixed & operator=(const Fixed& rhs);
    int getRawBits(void) const;
    void setRawBits(const int raw);
    
};
#endif
