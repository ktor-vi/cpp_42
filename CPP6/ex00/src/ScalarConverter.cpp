#include "../includes/ScalarConverter.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <float.h>
#include <limits.h>
#include <stdlib.h>
ScalarConverter::ScalarConverter() {
  std::cout << "ScalarConverter constructor." << std::endl;
}

ScalarConverter::~ScalarConverter() {
  std::cout << "ScalarConverter destructor." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs) {
  (void)rhs;
  std::cout << "ScalarConverter copy constructor." << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
  std::cout << "ScalarConverter copy assignment operator" << std::endl;
  (void)rhs;
  return *this;
}
void static display(char c, int i, float f, double d){
  std::cout << "Char : ";
  if(c >= 33 && c <= 126)
    std::cout << c;
  else if (c >= 1 || c == 127)
    std::cout << "Non Printable";
  else 
    std::cout << "Impossible";
  std::cout << std::endl;
  std::cout << "Integer : " << i << std::endl;
  std::cout << "Float : " << std::fixed << std::setprecision(1) << f << "f"<< std::endl;
  std::cout << "Double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

bool static isNumeric(std::string literal)
{
  size_t len = literal.size();
  if(literal[len-1] == 'f')
    len--;
  for(size_t i = 0; i < len; i++)
  {
    if((literal[i] < '0' || literal[i] > '9') && literal[i] != '.')
      return false;
  } 
  return true;
}

void ScalarConverter::convert(std::string literal){
  if (literal.size() == 1 && !isdigit(literal[0]))
  {
    char cc = literal[0];
    int ci = static_cast<int>(cc);
    float cf = static_cast<float>(cc);
    double cd = static_cast<double>(cc);
    display(cc, ci, cf, cd);
  }
  else if(isNumeric(literal) && std::count(literal.begin(), literal.end(), '.') == 1 && literal[literal.size() - 1] == 'f')
  {
    if(strtold(literal.c_str(), NULL) < FLT_MIN|| strtold(literal.c_str(), NULL) > FLT_MAX )
      std::cout << "This overflows the float values !";
    else{
    float ff = atof(literal.c_str());
    char fc = static_cast<char>(ff);
    int fi = static_cast<int>(ff);
    double fd = static_cast<double>(ff);
    display(fc, fi, ff, fd);
    }
  }
  else if(isNumeric(literal) && std::count(literal.begin(), literal.end(), '.') == 1 )
  {
    if(strtold(literal.c_str(), NULL) < DBL_MIN|| strtold(literal.c_str(), NULL) > DBL_MAX )
      std::cout << "This overflows the double values !";
    else{
    double dd = atof(literal.c_str());
    char dc = static_cast<char>(dd);
    int di = static_cast<int>(dd);
    float df = static_cast<float>(dd);
    display(dc, di, df, dd);
    }
  }
  else if(isNumeric(literal))
  {
    if(atol(literal.c_str()) > INT_MAX || atol(literal.c_str()) < INT_MIN)
      std::cout << "This overflows the int values !";
    else{
    int ii = atoi(literal.c_str());
    char ic = static_cast<char>(ii);
    float ifv = static_cast<float>(ii);
    double id = static_cast<double>(ii);
    display(ic, ii, ifv, id);
  }
  }
  else{
    std::cout << "Not castable" << std::endl;
  }
}
