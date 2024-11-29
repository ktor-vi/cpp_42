#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include "../includes/Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
  const std::string _name;
  const int _signGrade;
  const int _execGrade;
  bool _signed;
  Form();

public:
  Form(std::string name, const int signGrade, const int execGrade);
  Form(const Form &rhs);
  Form &operator=(const Form &rhs);
  virtual ~Form();
  bool getSigned() const ;
  int getSignGrade() const;
  int getExecGrade() const;
  bool getSignedStatus() const;
  std::string getName() const;
  void beSigned(Bureaucrat &bureaucrat);

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif
