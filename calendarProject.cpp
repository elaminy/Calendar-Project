#include "calendarType.h"
#include <iostream>

int main() {
    int month, year;
    char choice;

    do {
        std::cout << "Enter the month (1-12): ";
        std::cin >> month;
        std::cout << "Enter the year: ";
        std::cin >> year;

        calendarType calendar(month, year);
        calendar.printCalendar();

        std::cout << "\nDo you want to print another calendar? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}