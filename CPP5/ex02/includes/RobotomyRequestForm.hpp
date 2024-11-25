#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <string>
#include "AForm.hpp"

class AForm;
class RobotomyRequestForm : public AForm {
private: 
  std::string _target;
protected:
  void executeAction() const ;
public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &rhs);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
  virtual ~RobotomyRequestForm();
};

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &rhs);

#endif
