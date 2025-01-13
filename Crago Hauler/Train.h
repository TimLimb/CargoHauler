#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <vector>
#include "Transporter.h"
#include "Cargo.h"

using namespace std;

class Train : public Transporter {
private:
    vector<Cargo*> cargo;
public:
    void load(void* item) override;
    void move() override;
    void unload() override;
    void empty() override;
    bool isEmpty() const override;
    int reportCargoWeight() const;
};

#endif