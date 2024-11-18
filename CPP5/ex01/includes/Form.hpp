#ifndef FORM_HPP
#define FORM_HPP
#include <string>
class Form {
private:
  const std::string _name;
  const int _signGrade;
  const int _execGrade;
  bool _signed;

public:
  Form(std::string name, const int signGrade, const int execGrade);
  Form(const Form &rhs);
  Form &operator=(const Form &rhs);
  virtual ~Form();
  int getSignGrade() const;
  int getExecGrade() const;
  bool getSignedStatus() const;
  std::string getName() const;

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
