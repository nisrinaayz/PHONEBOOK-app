#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"
#include <string>

class PhoneBook {
private:
    Contact* contacts[8];
    int count;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact(std::string name, std::string location, std::string address, std::string strength);
    void searchContact(std::string name);
};

#endif // PHONEBOOK_H