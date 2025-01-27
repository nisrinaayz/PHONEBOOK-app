#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
private:
    std::string name;
    std::string location;
    std::string address;
    std::string strength;

public:
    Contact(std::string n, std::string loc, std::string addr, std::string str);
    void display() const;
    std::string getName() const;
};

#endif // CONTACT_H