#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(std::string name, int height);
    std::string getName() const;
    int getHeight() const;
    double getHeightInInches() const;
    bool operator<(const Person& other) const;
private:
    std::string name;
    int height;
};

#endif