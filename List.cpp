#include "List.h"
#include <iostream>

void List::addItem(const Item &item) {
    items.push_back(item);
}

void List::display() const {
    std::cout << "\n===== TO DO LIST =====\n";

    if (items.empty()) {
        std::cout << "No items.\n";
        return;
    }

    for (size_t i = 0; i < items.size(); i++) {
        std::cout << i + 1 << ". "
                  << items[i].getTitle()
                  << " - Due: " << items[i].getDueDate()
                  << "\n";
    }
}

bool List::removeItem(int index) {
    if (index < 0 || index >= (int)items.size()) {
        return false; // invalid index
    }
    items.erase(items.begin() + index);
    return true;
}
