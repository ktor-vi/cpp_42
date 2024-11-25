#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137){
  this->_target = target;
  std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm("ShrubberyCreationForm", 145, 137) { 
  std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
    *this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
  if (this != &rhs) {
    this->_target = rhs._target;
  }
  return *this;
}

void ShrubberyCreationForm::executeAction() const {
  std::string shrubName = this->_target + "_shrubbery";
  std::ofstream shrubFile (shrubName.c_str());
    shrubFile <<  "    oxoxoo    ooxoo\n"
						  << "  ooxoxo oo  oxoxooo\n"
						  << " oooo xxoxoo ooo ooox\n"
							<< " oxo o oxoxo  xoxxoxo\n"
						  << "  oxo xooxoooo o ooo\n"
							<< "    ooo\\oo\\  /o/o\n"
							<< "        \\  \\/ /\n"
							<< "         |   /\n"
							<< "         |  |\n"
							<< "         | D|\n"
							<< "         |  |\n"
							<< "         |  |\n"
							<< "  ______/____\\____\n";
    shrubFile.close();
}
