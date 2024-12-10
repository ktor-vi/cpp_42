#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <string>
#include "AForm.hpp"

class AForm;
class PresidentialPardonForm : public AForm {
private: 
  std::string _target;
protected:
  void executeAction() const ;
public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &rhs);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
  virtual ~PresidentialPardonForm();
};

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &rhs);

#endif
