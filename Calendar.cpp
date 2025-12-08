#include "Calendar.h"
#include <sstream>

Calendar::Calendar() : day(1), month(1), year(2000) {}

Calendar::Calendar(int d, int m, int y) : day(d), month(m), year(y) {}

void Calendar::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

std::string Calendar::getDateString() const {
    std::stringstream ss;
    ss << month << "/" << day << "/" << year;
    return ss.str();
}
