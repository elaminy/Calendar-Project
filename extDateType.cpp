#include "extDateType.h"
#include <iostream>

const std::string extDateType::monthNames[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

extDateType::extDateType() : dateType() {
    monthName = monthNames[1];
}

extDateType::extDateType(int month, int day, int year) : dateType(month, day, year) {
    monthName = monthNames[month];
}

void extDateType::setDate(int month, int day, int year) {
    dateType::setDate(month, day, year);
    monthName = monthNames[month];
}

void extDateType::setMonth(int month) {
    dateType::setMonth(month);
    monthName = monthNames[month];
}

void extDateType::setYear(int year) {
    dateType::setYear(year);
}

void extDateType::printLongDate() const {
    std::cout << monthName << " " << getDay() << ", " << getYear();
}

void extDateType::printLongMonthYear() const {
    std::cout << monthName << " " << getYear();
}