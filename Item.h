#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "Calendar.h"

class Item {
private:
    std::string title;
    Calendar dueDate;

public:
    Item();
    Item(std::string t, const Calendar &date);

    std::string getTitle() const;
    std::string getDueDate() const;
};

#endif
