#ifndef CARGO_H
#define CARGO_H

#include <string>

class Cargo {
public:
    Cargo(std::string type, int weight);
    std::string getType() const;
    int getWeight() const;
private:
    std::string type;
    int weight;
};

#endif