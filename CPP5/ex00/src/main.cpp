#include "../includes/Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(void) {

  Bureaucrat *patrick = new Bureaucrat("Patrick", 1);
  try {
  // Bureaucrat *patrick = new Bureaucrat("Patrick", 0);
  // Bureaucrat *patrick = new Bureaucrat("Patrick", 151);
  std::cout << *patrick << std::endl;
    patrick->decrementGrade();
    // patrick->incrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl; 
  }
  std::cout << *patrick << std::endl;
  Bureaucrat *bernard = new Bureaucrat("Bernard", 150);
  std::cout << *bernard << std::endl;
  try {
    bernard->incrementGrade();
    // bernard->decrementGrade();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl; 
  }
  delete patrick;
  delete bernard;
}
