#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int main(void) {

  Bureaucrat *patrick = new Bureaucrat("Patrick", 1);
  Bureaucrat *bernard= new Bureaucrat("Bernard", 120);
  // Form *A36 = new Form("A38", 0, 2);
  // Form *A37 = new Form("A38", 3, 151);
  Form *A38 = new Form("A38", 3, 2);
  Form *A39 = new Form("A39", 10, 25);
  std::cout << *A38 << std::endl;
  std::cout << *A39 << std::endl;
  patrick->signForm(*A38);
  bernard->signForm(*A39);
  std::cout << *A38 << std::endl;
  std::cout << *A39 << std::endl;
  delete patrick;
  delete bernard;
  delete A38;
  delete A39;
}
