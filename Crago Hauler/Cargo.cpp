#include "Cargo.h"

Cargo::Cargo(std::string type, int weight) : type(type), weight(weight) {}

std::string Cargo::getType() const {
    return type;
}

int Cargo::getWeight() const {
    return weight;
}