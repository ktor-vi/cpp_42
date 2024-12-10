#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5){
  this->_target = target;
  std::cout << "PresidentialPardonForm Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm("PresidentialPardonForm", 25, 5) { 
  std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
  if (this != &rhs) {
    this->_target = rhs._target;
  }
  return *this;
}

void PresidentialPardonForm::executeAction() const {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
