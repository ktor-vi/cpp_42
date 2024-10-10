#include "../includes/Contact.hpp"

Contact::Contact(void) {
    return;
}
Contact::~Contact(void) {
    return;
}

void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
    this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) {
    return this->_firstName;
}

std::string Contact::getLastName(void) {
    return this->_lastName;
}

std::string Contact::getNickName(void) {
    return this->_nickName;
}

std::string Contact::getPhoneNumber(void) {
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) {
    return this->_darkestSecret;
}
