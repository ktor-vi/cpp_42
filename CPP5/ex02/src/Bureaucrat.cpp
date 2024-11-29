#include "../includes/Bureaucrat.hpp"
#include <iostream>
#include "../includes/AForm.hpp"
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
  std::cout << "Bureaucrat Constructor Called" << std::endl;
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
    : _name(rhs._name), _grade(rhs._grade) {
  std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  if (this != &rhs) {
    this->_grade = rhs._grade;
  }
  return *this;
}

void Bureaucrat::incrementGrade() {
  if (this->_grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  this->_grade--;
}

void Bureaucrat::decrementGrade() {
  if (this->_grade + 1 > 150)
    throw Bureaucrat::GradeTooHighException();
  this->_grade++;
}

int Bureaucrat::getGrade() const { return (this->_grade); }
std::string Bureaucrat::getName() const { return (this->_name); }

void Bureaucrat::signForm(AForm &form){
  try{
    form.beSigned(*this);
    std::cout << *this << " signed " << form.getName() << std::endl;  
  }
  catch(AForm::GradeTooLowException &e){
    std::cout << *this << " couldn’t sign " << form.getName() << " because : " << e.what() << std::endl;  
  }
}
void  Bureaucrat::executeForm(AForm const & form){
  try{
    form.execute(*this);
    std::cout << *this << " executed " << form.getName() << std::endl;  
  }
  catch(AForm::GradeTooLowException &e){
    std::cout << *this << " couldn’t execute " << form.getName() << " because : " << e.what() << std::endl;  
  }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade Too High !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade Too Low !");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs) {
  os << "Bureaucrat " << rhs.getName() << " with grade : " << rhs.getGrade();
  return os;
}
