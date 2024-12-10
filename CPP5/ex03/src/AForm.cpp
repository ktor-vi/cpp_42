#include "../includes/AForm.hpp"
#include <iostream>

AForm::AForm(const std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
  std::cout << "AForm Constructor Called" << std::endl;
  if (signGrade < 1 || execGrade < 1)
    throw AForm::GradeTooHighException();
  if (signGrade > 150 || execGrade > 150)
    throw AForm::GradeTooLowException();
  this->_signed = false;
}

AForm::~AForm() {
  std::cout << "AForm Destructor Called" << std::endl;
}

AForm::AForm(const AForm &rhs)
    : _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade) {
  std::cout << "AForm Copy Constructor Called" << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
  if (this != &rhs) {
    this->_signed = rhs._signed;
  }
  return *this;
}

bool AForm::getSigned() const { return (this->_signed); }
int AForm::getSignGrade() const { return (this->_signGrade); }
int AForm::getExecGrade() const { return (this->_execGrade); }
std::string AForm::getName() const { return (this->_name); }

void AForm::beSigned(Bureaucrat &bureaucrat)
{
  if(bureaucrat.getGrade() > this->getSignGrade())
    throw AForm::GradeTooLowException();
  this->_signed = true;
}


void AForm::execute(Bureaucrat &bureaucrat) const {
    if (!this->_signed) {
        throw AForm::FormNotSignedException();
    }
    if (bureaucrat.getGrade() > this->_execGrade) {
        throw AForm::GradeTooLowException();
    }
    this->executeAction(); 
}

const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade Too High !");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade Too Low !");
}

const char *AForm::FormNotSignedException ::what() const throw() {
  return ("Form Not Signed !");
}

std::ostream &operator<<(std::ostream &os, AForm const &rhs) {

  os << "AForm " << rhs.getName() << " with grade to sign : " << rhs.getSignGrade() << " and grade to execute : " << rhs.getExecGrade() <<
     ", status : " << (rhs.getSigned()? " signed." : "not signed.");
  return os;
}
