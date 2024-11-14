#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main(void) {
  // Bureaucrat *patrick = new Bureaucrat("Patrick", 0);
  // // Bureaucrat *patrick = new Bureaucrat("Patrick", 151);

  Bureaucrat *patrick = new Bureaucrat("Patrick", 3);
  std::cout << *patrick << std::endl;
  patrick->incrementGrade();
  std::cout << *patrick << std::endl;
  patrick->decrementGrade();
  std::cout << *patrick << std::endl;
  Bureaucrat *bernard = new Bureaucrat("Bernard", 150);
  std::cout << *bernard << std::endl;
  bernard->decrementGrade();
  std::cout << *bernard << std::endl;
}
