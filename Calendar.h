#ifndef CALENDAR_H
#define CALENDAR_H

#include <string>

class Calendar {
private:
    int day;
    int month;
    int year;

public:
    Calendar();
    Calendar(int d, int m, int y);

    void setDate(int d, int m, int y);
    std::string getDateString() const;
};

#endif
