#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <vector>
#include "Transporter.h"
#include "Person.h"

using namespace std;

class Bus : public Transporter {
private:
    vector<Person*> passengers;
    int farePerPerson;
public:
    Bus(int fare);
    void load(void* item) override;
    void move() override;
    void unload() override;
    void empty() override;
    bool isEmpty() const override;
    int totalFare() const;
    void displayPassengers() const;
};

#endif