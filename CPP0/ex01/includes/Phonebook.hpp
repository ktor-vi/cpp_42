#ifndef PHONEBOOK_H
#include "Contact.hpp"

class Phonebook {
public:
    Phonebook();
    ~Phonebook();
    void addContact(int *count);
    void printPhonebook(void);
    Contact getContact(int index);
    void setContact(Contact contact, int index);
    std::string truncate(std::string str);

private:
    Contact _contacts[8];
};
#endif
