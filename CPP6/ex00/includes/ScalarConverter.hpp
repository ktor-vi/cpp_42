#include <string>
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter {

private: 
  ScalarConverter();
  ScalarConverter(const ScalarConverter &rhs);
  ScalarConverter &operator=(const ScalarConverter &rhs);
  virtual ~ScalarConverter();

public:
  static void convert(std::string literal);

};

#endif // !SCALARCONVERTER_HPP
