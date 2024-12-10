#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include "../includes/Bureaucrat.hpp"
class Bureaucrat;

class AForm {
private:
  const std::string _name;
  const int _signGrade;
  const int _execGrade;
  bool _signed;
  AForm();
protected:  
  virtual void executeAction() const = 0;
public:
  AForm(std::string name, const int signGrade, const int execGrade);
  AForm(const AForm &rhs);
  AForm &operator=(const AForm &rhs);
  virtual ~AForm() = 0;
  bool getSigned() const ;
  int getSignGrade() const;
  int getExecGrade() const;
  bool getSignedStatus() const;
  std::string getName() const;
  void beSigned(Bureaucrat &bureaucrat);
  void execute(Bureaucrat &bureaucrat) const;

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class FormNotSignedException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, AForm const &rhs);

#endif
