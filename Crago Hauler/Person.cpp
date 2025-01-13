#include "Person.h"

Person::Person(std::string name, int height) : name(name), height(height) {}

std::string Person::getName() const {
    return name;
}

int Person::getHeight() const {
    return height;
}

double Person::getHeightInInches() const {
    return static_cast<double>(height) / 2.54;
}

bool Person::operator<(const Person& other) const {
    return height < other.height;
}