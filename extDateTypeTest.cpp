#include "extDateType.h"
#include <iostream>

int main() {
    // Test default constructor
    extDateType date1;
    std::cout << "Default date: ";
    date1.printLongDate();
    std::cout << std::endl;

    // Test constructor with parameters
    extDateType date2(3, 15, 2023);
    std::cout << "Date with parameters: ";
    date2.printLongDate();
    std::cout << std::endl;

    // Test setter and getter functions
    date1.setDate(12, 31, 2022);
    std::cout << "Date after setting: ";
    date1.printLongDate();
    std::cout << std::endl;
    std::cout << "Month: " << date1.getMonth() << std::endl;
    std::cout << "Day: " << date1.getDay() << std::endl;
    std::cout << "Year: " << date1.getYear() << std::endl;

    // Test printLongMonthYear function
    std::cout << "Long month and year: ";
    date1.printLongMonthYear();
    std::cout << std::endl;

    // Test other functions from the base class
    std::cout << "Is " << date1.getYear() << " a leap year? " << std::boolalpha << date1.isLeapYear() << std::endl;
    std::cout << "Days in the current month: " << date1.daysInMonth() << std::endl;
    std::cout << "Days passed since the beginning of the year: " << date1.daysPassed() << std::endl;
    std::cout << "Days remaining in the year: " << date1.daysRemaining() << std::endl;

    return 0;
}