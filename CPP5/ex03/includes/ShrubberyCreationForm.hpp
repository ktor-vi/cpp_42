#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <string>
#include "AForm.hpp"

class AForm;
class ShrubberyCreationForm : public AForm {
private: 
  std::string _target;
protected:
  void executeAction() const ;
public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
  virtual ~ShrubberyCreationForm();
};

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &rhs);

#endif
