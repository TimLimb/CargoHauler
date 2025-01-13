#include "Transporter.h"

void Transporter::load(void* item) {
    items.push_back(item);
}

void* Transporter::unload() {
    if (!items.empty()) {
        auto item = items.back();
        items.pop_back();
        return item;
    }
    return nullptr;
}

void Transporter::empty() {
    items.clear();
}

bool Transporter::isEmpty() const {
    return items.empty();
}

int Transporter::getItemCount() const {
    return items.size();
}