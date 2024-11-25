#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

int main(void) {
  Bureaucrat ghislain("Ghislain", 4); 
  try {
    ShrubberyCreationForm form("home");

    form.beSigned(ghislain);
    form.execute(ghislain); 
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    RobotomyRequestForm form2("Patrick");

    form2.beSigned(ghislain); 
    form2.execute(ghislain); 
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    PresidentialPardonForm form3("Patrick");

    form3.beSigned(ghislain); 
    form3.execute(ghislain);
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
