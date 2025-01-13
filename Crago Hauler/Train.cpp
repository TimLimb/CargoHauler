#include "Train.h"

void Train::load(void* item) {
    cargo.push_back(static_cast<Cargo*>(item));
}

void Train::move() {
    cout << "Train is moving to its destination!" << endl;
}

void Train::unload() {
    if (!cargo.empty()) {
        for (auto item : cargo) {
            cout << "Unloading cargo: " << item->getType() << endl;
            delete item;
        }
        cargo.clear();
    } else {
        cout << "No cargo to unload!" << endl;
    }
}

void Train::empty() {
    cargo.clear();
    cout << "Train is now empty." << endl;
}

bool Train::isEmpty() const {
    return cargo.empty();
}

int Train::reportCargoWeight() const {
    int totalWeight = 0;
    for (const auto& item : cargo) {
        totalWeight += item->getWeight();
    }
    return totalWeight;
}