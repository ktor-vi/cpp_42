
#include "../includes/RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45){
  this->_target = target;
  std::cout << "RobotomyRequestForm Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm("RobotomyRequestForm", 72, 45) { 
  std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
  if (this != &rhs) {
    this->_target = rhs._target;
  }
  return *this;
}

void RobotomyRequestForm::executeAction() const {
    srand(time(0));
    std::cout << "*BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR*" << std::endl;
    if (rand() % 2) {
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << this->_target << "." << std::endl;
    }
}
