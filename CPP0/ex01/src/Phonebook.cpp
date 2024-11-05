#include "../includes/Phonebook.hpp"
#include <iostream>
#include <climits>
#include <cstdlib>

Phonebook::Phonebook(void)
{
  Contact contacts[8];
}
Phonebook::~Phonebook(void)
{
}

void Phonebook::setContact(Contact contact, int index) {
  this->_contacts[index] = contact;
}

Contact Phonebook::getContact(int index)
{
  return(this->_contacts[index]);
}

void Phonebook::addContact(int *count) {
  Contact contact;

  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

  std::cout << "Enter first name: ";
  std::getline(std::cin, firstName);
  std::cout << "Enter last name: ";
  std::getline(std::cin, lastName);
  std::cout << "Enter nick name: ";
  std::getline(std::cin, nickName);
  std::cout << "Enter phone number: ";
  std::getline(std::cin, phoneNumber);
  std::cout << "Enter darkest secret: ";
  std::getline(std::cin, darkestSecret);

  contact.setFirstName(firstName);
  contact.setLastName(lastName);
  contact.setNickName(nickName);
  contact.setPhoneNumber(phoneNumber);
  contact.setDarkestSecret(darkestSecret);

  setContact(contact, *count % 8);
  (*count)++;
}

std::string Phonebook::truncate(std::string str) {
  if (str.length() > 10) {
    return str.substr(0, 9) + ".";
  }
  return str;
}
void Phonebook::printPhonebook(void) {
  std::cout << "|      index|first name| last name|  nickname|" << std::endl;
  for (int i = 0; i < 8; i++) {
    std::cout << "|          " << i + 1 << "|";
    std::cout.width(10);
    std::cout << truncate(getContact(i).getFirstName()) << "|";
    std::cout.width(10);
    std::cout << truncate(getContact(i).getLastName()) << "|";
    std::cout.width(10);
    std::cout << truncate(getContact(i).getNickName()) << "|" << std::endl;
  }
  int index;
  std::string indexStr;
  std::cout << "Enter index: ";
  std::getline(std::cin, indexStr);
  if(std::cin.eof())
    exit(1);
  index = std::atoi(indexStr.c_str());

  std::cout << index;
  if (index > 0 && index <= 8) {
    std::cout << "First name: " << getContact(index - 1).getFirstName() << std::endl;
    std::cout << "Last name: " << getContact(index - 1).getLastName() << std::endl;
    std::cout << "Nick name: " << getContact(index - 1).getNickName() << std::endl;
    std::cout << "Phone number: " << getContact(index - 1).getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << getContact(index - 1).getDarkestSecret() << std::endl;
  } else {
    std::cout << "Invalid index" << std::endl;
  }
}
