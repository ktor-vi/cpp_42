#include "../includes/ScalarConverter.hpp"
#include <iostream>
int main(int argc, char **argv)
{
  if(argc != 2)
  {
    std::cout << "Only one argument please" << std::endl;
    return(1);
  }
  ScalarConverter::convert(argv[1]);
}
