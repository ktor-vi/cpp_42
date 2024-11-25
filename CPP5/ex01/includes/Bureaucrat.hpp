#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>

class Form;

class Bureaucrat {
private:
  const std::string _name;
  int _grade;

public:
  Bureaucrat(std::string name, int grade);
  Bureaucrat(const Bureaucrat &rhs);
  Bureaucrat &operator=(const Bureaucrat &rhs);
  virtual ~Bureaucrat();
  void incrementGrade();
  void decrementGrade();
  int getGrade() const;
  std::string getName() const;
  void signForm(Form &form);
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif
