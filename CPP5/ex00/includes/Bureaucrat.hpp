#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
class Bureaucrat {
private:
  std::string const _name;
  int _grade;

public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat &rhs);
  Bureaucrat operator=(const Bureaucrat &rhs);
  Bureaucrat operator++(void);
  Bureaucrat operator--(void);
  virtual ~Bureaucrat();
  int getGrade();
  std::string getName();

  class GradeTooLowException : public std::exception {
  public:
    std::string what();
  };

  class GradeTooHighException : public std::exception {
  public:
    std::string what();
  };
};
#endif
