#include "../includes/Phonebook.hpp"
#include <iostream>
int main(int argc, char **argv)
{
  Phonebook phonebook;
  int count = 0;

  (void)argv;
  if (argc == 1)
  {
    while(1)
    {
      std::cout << "Enter command: ";
      std::string command;
      std::getline(std::cin, command);
      if(command.empty())
        return 1;

      if (!command.empty()) {
        if(command == "SEARCH")
        {
          phonebook.printPhonebook();
        }
        else if(command == "ADD")
        {
          phonebook.addContact(&count);
        }
        else if(command == "EXIT")
        {
          break;
        }
      }
    }
  }
  else
{
    std::cout << "Usage: ./phonebook" << std::endl;
  }
}
