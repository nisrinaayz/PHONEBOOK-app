#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook() : count(0) {}

PhoneBook::~PhoneBook() {
    for (int i = 0; i < count; ++i) {
        delete contacts[i];
    }
}

void PhoneBook::addContact(std::string name, std::string location, std::string address, std::string strength) {
    if (count == 8) {
        delete contacts[0];
        for (int i = 1; i < 8; ++i) {
            contacts[i - 1] = contacts[i];
        }
        count--;
    }
    contacts[count++] = new Contact(name, location, address, strength);
}

void PhoneBook::searchContact(std::string name) {
    for (int i = 0; i < count; ++i) {
        if (contacts[i]->getName() == name) {
            contacts[i]->display();
            return;
        }
    }
    std::cout << "Contact not found." << std::endl;
}