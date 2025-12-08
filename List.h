#ifndef LIST_H
#define LIST_H

#include <vector>
#include "Item.h"

class List {
private:
    std::vector<Item> items;

public:
    void addItem(const Item &item);
    void display() const;
};

#endif
