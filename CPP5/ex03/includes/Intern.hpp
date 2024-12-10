#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include "../includes/AForm.hpp"
class AForm;

class Intern {

public:
  Intern();
  Intern(const Intern &rhs);
  Intern &operator=(const Intern &rhs);
  virtual ~Intern();
  AForm *makeForm(std::string formName, std::string target);
};

#endif
