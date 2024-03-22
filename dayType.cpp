#include "dayType.h"
#include <iostream>
using namespace std;

const string dayType::daysOfWeek[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

dayType::dayType() {
    day = daysOfWeek[0];
}

dayType::dayType(const string& day) {
    setDay(day);
}

void dayType::setDay(const string& day) {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            this->day = day;
            return;
        }
    }
    this->day = daysOfWeek[0];
}

string dayType::getDay() const {
    return day;
}

string dayType::getNextDay() const {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i])
            return daysOfWeek[(i + 1) % 7];
    }
    return daysOfWeek[0];
}

string dayType::getPreviousDay() const {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i])
            return daysOfWeek[(i + 6) % 7];
    }
    return daysOfWeek[0];
}

void dayType::addDays(int days) {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            day = daysOfWeek[(i + days) % 7];
            return;
        }
    }
}

void dayType::print() const {
    cout << day;
}

int dayType::getDayNumber() const {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i])
            return i;
    }
    return 0;
}