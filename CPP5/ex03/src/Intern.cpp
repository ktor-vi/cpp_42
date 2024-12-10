#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {
  std::cout << "Intern Constructor Called" << std::endl;
}

Intern::~Intern() {
  std::cout << "Intern Destructor Called" << std::endl;
}

Intern::Intern(const Intern &rhs)
{
  *this = rhs;
  std::cout << "Intern Copy Constructor Called" << std::endl;
}

Intern &Intern::operator=(const Intern &rhs) {
  if (this != &rhs) {
    *this = rhs;
  }
  return *this;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
  int i;
  std::string formStrings[] = {std::string("presidential pardon"), std::string("robotomy request"), std::string("shrubbery creation")};
  AForm *forms[] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};

  for(i = 0; i < 3; i++)
  {
    if(formName == formStrings[i])
    {
      std::cout << "Intern creates " << formStrings[i] << " form." << std::endl;
      break;
    }
  }
  for(int j = 0; j < 3; j++)
  {
    if(i != j)
      delete forms[j];
  }
  if (i == 4)
  {
    std::cout << "Intern can't create form, as it does not exist." << std::endl;
    return (NULL);
  } else {
    return forms[i];
  } 
}


