#include "Contact.h"
#include <iostream>

Contact::Contact(std::string n, std::string loc, std::string addr, std::string str)
    : name(n), location(loc), address(addr), strength(str) {}

void Contact::display() const {
    std::cout << "Name: " << name << ", Location: " << location
              << ", Address: " << address << ", Strength: " << strength << std::endl;
}

std::string Contact::getName() const {
    return name;
}