#include "dateType.h"
#include <iostream>
using namespace std;

// Constructor
dateType::dateType(int m, int d, int y) {
    setDate(m, d, y);
}

// Setter functions
void dateType::setDate(int m, int d, int y) {
    setMonth(m);
    setDay(d);
    setYear(y);
}

void dateType::setMonth(int m) {
    if (m >= 1 && m <= 12)
        month = m;
    else {
        cout << "Invalid month. Setting to default value of 1." << endl;
        month = 1;
    }
}

void dateType::setDay(int d) {
    int maxDays = daysInMonth();
    if (d >= 1 && d <= maxDays)
        day = d;
    else {
        cout << "Invalid day. Setting to default value of 1." << endl;
        day = 1;
    }
}

void dateType::setYear(int y) {
    if (y >= 1900)
        year = y;
    else {
        cout << "Invalid year. Setting to default value of 1900." << endl;
        year = 1900;
    }
}

// Getter functions
int dateType::getMonth() const {
    return month;
}

int dateType::getDay() const {
    return day;
}

int dateType::getYear() const {
    return year;
}

// Other member functions
bool dateType::isLeapYear() const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dateType::daysInMonth() const {
    int daysPerMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear() && month == 2)
        return 29;
    else
        return daysPerMonth[month - 1];
}

void dateType::print() const {
    cout << month << "-" << day << "-" << year;
}

int dateType::daysPassed() const {
    int days = day;
    for (int m = 1; m < month; ++m)
        days += daysInMonth();
    return days;
}

int dateType::daysRemaining() const {
    int days = daysInMonth() - day;
    for (int m = month + 1; m <= 12; ++m)
        days += daysInMonth();
    return days;
}

void dateType::addDays(int days) {
    while (days > 0) {
        int daysLeftInMonth = daysInMonth() - day + 1;
        if (days >= daysLeftInMonth) {
            days -= daysLeftInMonth;
            ++month;
            if (month > 12) {
                month = 1;
                ++year;
            }
            day = 1;
        }
        else {
            day += days;
            days = 0;
        }
    }
}