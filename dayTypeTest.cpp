#include "dayType.h"
#include <iostream>
using namespace std;

int main() {
    // Create a day object using the default constructor
    dayType day1;
    cout << "Default day: ";
    day1.print();
    cout << endl;

    // Display the previous day
    cout << "Previous day: ";
    cout << day1.getPreviousDay() << endl;

    // Display the next day
    cout << "Next day: ";
    cout << day1.getNextDay() << endl;

    // Create a day object using the constructor with parameters
    dayType day2("Monday");
    cout << "Day initialized to Monday: ";
    day2.print();
    cout << endl;

    // Use get function to display the value of the instance variable
    cout << "Get function: " << day2.getDay() << endl;

    // Add 3 days to the current day and display the new day value
    day2.addDays(3);
    cout << "After adding 3 days: ";
    day2.print();
    cout << endl;

    // Add 30 days to the current day and display the new day value
    day2.addDays(30);
    cout << "After adding 30 days: ";
    day2.print();
    cout << endl;

    // Add 365 days to the current day and display the new day value
    day2.addDays(365);
    cout << "After adding 365 days: ";
    day2.print();
    cout << endl;

    return 0;
}