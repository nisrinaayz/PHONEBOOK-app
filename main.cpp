#include <iostream>
#include <string>
#include "PhoneBook.h"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            std::string name, location, address, strength;
            std::cout << "Enter name: ";
            std::getline(std::cin, name);
            std::cout << "Enter location: ";
            std::getline(std::cin, location);
            std::cout << "Enter address: ";
            std::getline(std::cin, address);
            std::cout << "Enter strength: ";
            std::getline(std::cin, strength);
            phoneBook.addContact(name, location, address, strength);
        } else if (command == "SEARCH") {
            std::string name;
            std::cout << "Enter name to search: ";
            std::getline(std::cin, name);
            phoneBook.searchContact(name);
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}