#include "../includes/Form.hpp"
#include <iostream>

Form::Form(const std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
  std::cout << "Form Constructor Called" << std::endl;
  if (signGrade < 1 || execGrade < 1)
    throw Form::GradeTooHighException();
  if (signGrade > 150 || execGrade > 150)
    throw Form::GradeTooLowException();
  this->_signed = false;
}

Form::~Form() {
  std::cout << "Form Destructor Called" << std::endl;
}

Form::Form(const Form &rhs)
    : _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade) {
  std::cout << "Form Copy Constructor Called" << std::endl;
}

Form &Form::operator=(const Form &rhs) {
  if (this != &rhs) {
    this->_signed = rhs._signed;
  }
  return *this;
}

bool Form::getSigned() const { return (this->_signed); }
int Form::getSignGrade() const { return (this->_signGrade); }
int Form::getExecGrade() const { return (this->_execGrade); }
std::string Form::getName() const { return (this->_name); }

void Form::beSigned(Bureaucrat &bureaucrat)
{
  if(bureaucrat.getGrade() > this->getSignGrade())
    throw Form::GradeTooLowException();
  this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade Too High !");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade Too Low !");
}

std::ostream &operator<<(std::ostream &os, Form const &rhs) {

  os << "Form " << rhs.getName() << " with grade to sign : " << rhs.getSignGrade() << " and grade to execute : " << rhs.getExecGrade() <<
     ", status : " << (rhs.getSigned()? " signed." : "not signed.");
  return os;
}
