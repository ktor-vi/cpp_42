#ifndef PHONEBOOK_H
#include "Contact.hpp"

class Phonebook {
public:
    Contact contacts[8];
    int count;
    Phonebook();
    ~Phonebook();
    void addContact(Contact *contacts, int *count);
    void printPhonebook(Contact *contacts);
};
#endif
