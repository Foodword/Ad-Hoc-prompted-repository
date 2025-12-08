#include "Item.h"

Item::Item() : title("Untitled"), dueDate() {}

Item::Item(std::string t, const Calendar &date)
    : title(t), dueDate(date) {}

std::string Item::getTitle() const {
    return title;
}

std::string Item::getDueDate() const {
    return dueDate.getDateString();
}
