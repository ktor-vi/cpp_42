#include "../includes/Phonebook.hpp"
#include <iostream>
Phonebook::Phonebook(void)
{
    Contact contacts[8];
}
Phonebook::~Phonebook(void)
{
}
void Phonebook::addContact(Contact *contacts, int *count) {
    Contact contact;

    std::cout << "Enter first name: ";
    std::cin >> contact.firstName;
    std::cout << "Enter last name: ";
    std::cin >> contact.lastName;
    std::cout << "Enter nick name: ";
    std::cin >> contact.nickName;
    std::cout << "Enter phone number: ";
    std::cin >> contact.phoneNumber;
    std::cout << "Enter darkest secret: ";
    std::cin >> contact.darkestSecret;
    contacts[*count % 8] = contact;
    (*count)++;
}

void Phonebook::printPhonebook(Contact *contacts) {
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "         " << i << "|";
        std::cout.width(10);
        std::cout << contacts[i].firstName << "|";
        std::cout.width(10);
        std::cout << contacts[i].lastName << "|";
        std::cout.width(10);
        std::cout << contacts[i].nickName << std::endl;
    }
    int index;
    std::cout << "Enter index: ";
    std::cin >> index;
    if (index >= 0 && index < 8) {
        std::cout << "First name: " << contacts[index].firstName << std::endl;
        std::cout << "Last name: " << contacts[index].lastName << std::endl;
        std::cout << "Nick name: " << contacts[index].nickName << std::endl;
        std::cout << "Phone number: " << contacts[index].phoneNumber << std::endl;
        std::cout << "Darkest secret: " << contacts[index].darkestSecret << std::endl;
    } else {
        std::cout << "Invalid index" << std::endl;
    }
}
