#include "bus.h"

Bus::Bus(int fare) : farePerPerson(fare) {}

void Bus::load(void* item) {
    passengers.push_back(static_cast<Person*>(item));
}

void Bus::move() {
    cout << "Bus is moving to its destination!" << endl;
}

void Bus::unload() {
    if (!passengers.empty()) {
        for (auto person : passengers) {
            cout << "Unloading passenger: " << person->getName() << endl;
            delete person;
        }
        passengers.clear();
    } else {
        cout << "No passengers to unload!" << endl;
    }
}

void Bus::empty() {
    passengers.clear();
    cout << "Bus is now empty." << endl;
}

bool Bus::isEmpty() const {
    return passengers.empty();
}

int Bus::totalFare() const {
    return passengers.size() * farePerPerson;
}

void Bus::displayPassengers() const {
    for (const auto& person : passengers) {
        cout << "Passenger: " << person->getName() << endl;
    }
}