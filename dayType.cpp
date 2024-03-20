#include "dayType.h"
#include <iostream>
using namespace std;

const string dayType::daysOfWeek[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

// Default constructor
dayType::dayType() {
    day = daysOfWeek[0]; // Default day is Sunday
}

// Constructor with parameters
dayType::dayType(const string& day) {
    setDay(day);
}

// Setter function
void dayType::setDay(const string& day) {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            this->day = day;
            return;
        }
    }
    this->day = daysOfWeek[0]; // If invalid day, set to Sunday
}

// Getter function
string dayType::getDay() const {
    return day;
}

// Other member functions
string dayType::getNextDay() const {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            return daysOfWeek[(i + 1) % 7];
        }
    }
    return daysOfWeek[0]; // If invalid day, return Sunday
}

string dayType::getPreviousDay() const {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            return daysOfWeek[(i + 6) % 7];
        }
    }
    return daysOfWeek[0]; // If invalid day, return Sunday
}

void dayType::addDays(int days) {
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            day = daysOfWeek[(i + days) % 7];
            return;
        }
    }
}

// Print function
void dayType::print() const {
    cout << day;
}