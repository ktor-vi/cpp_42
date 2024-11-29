#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

//Shrubbery    : 145, 137
//Robotomy     : 72, 45
//Presidential :  25, 5
int main(void) {
  Bureaucrat ghislain("Ghislain", 4); 
  try {
    ShrubberyCreationForm form("home");
  
    ghislain.signForm(form);
    ghislain.executeForm(form);
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    RobotomyRequestForm form("Patrick");

    ghislain.signForm(form);
    ghislain.executeForm(form);

  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    PresidentialPardonForm form("Patrick");

    ghislain.signForm(form);
    ghislain.executeForm(form);
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
