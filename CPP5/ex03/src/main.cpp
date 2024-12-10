#include "../includes/Intern.hpp"
#include "../includes/Bureaucrat.hpp"

//Shrubbery    : 145, 137
//Robotomy     : 72, 45
//Presidential :  25, 5
int main(void) {
  Intern intern;
  Bureaucrat serge("serge", 5);


  AForm *form;

  form = intern.makeForm("presidential pardon", "Patrick");
  serge.signForm(*form);
  serge.executeForm(*form);
  delete form;
  return 0;
}
