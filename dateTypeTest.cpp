#include "dateType.h"
#include <iostream>
using namespace std;

int main() {
    // Test default constructor
    dateType date1;
    cout << "Default date: ";
    date1.print();
    cout << endl;

    // Test constructor with parameters
    dateType date2(3, 15, 2023);
    cout << "Date with parameters: ";
    date2.print();
    cout << endl;

    // Test setter and getter functions
    date1.setDate(12, 31, 2022);
    cout << "Date after setting: ";
    date1.print();
    cout << endl;
    cout << "Month: " << date1.getMonth() << endl;
    cout << "Day: " << date1.getDay() << endl;
    cout << "Year: " << date1.getYear() << endl;

    // Test isLeapYear function
    cout << "Is " << date1.getYear() << " a leap year? " << boolalpha << date1.isLeapYear() << endl;

    // Test daysInMonth function
    cout << "Days in the current month: " << date1.daysInMonth() << endl;

    // Test daysPassed function
    cout << "Days passed since the beginning of the year: " << date1.daysPassed() << endl;

    // Test daysRemaining function
    cout << "Days remaining in the year: " << date1.daysRemaining() << endl;

    // Test addDays function
    int daysToAdd = 100;
    cout << "Adding " << daysToAdd << " days to the current date: ";
    date1.print();
    cout << endl;
    date1.addDays(daysToAdd);
    cout << "New date: ";
    date1.print();
    cout << endl;

    return 0;
}