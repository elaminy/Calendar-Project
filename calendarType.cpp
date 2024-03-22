#include "calendarType.h"
#include <iostream>
#include <iomanip>
#include <cassert>

void calendarType::firstDayOfMonth() {
    int totalDays = 0;
    int month = firstDate.getMonth();
    int year = firstDate.getYear();

    for (int i = 1900; i < year; ++i) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    for (int i = 1; i < month; ++i) {
        if (i == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                totalDays += 29;
            else
                totalDays += 28;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            totalDays += 30;
        else
            totalDays += 31;
    }

    int dayOfWeek = (totalDays + 1) % 7;
    firstDay.addDays(dayOfWeek);
}

void calendarType::printCalendarTitle() const {
    std::cout << std::setw(20) << firstDate.getMonthName() << " " << firstDate.getYear() << std::endl;
}

void calendarType::printCalendarHeadings() const {
    std::cout << std::setw(5) << "Sun" << std::setw(5) << "Mon" << std::setw(5) << "Tue"
        << std::setw(5) << "Wed" << std::setw(5) << "Thu" << std::setw(5) << "Fri"
        << std::setw(5) << "Sat" << std::endl;
}

void calendarType::printCalendarDays() const {
    int daysInMonth = firstDate.daysInMonth();
    int startingDay = firstDay.getDayNumber();

    int currentDay = 1;
    for (int i = 0; i < startingDay; ++i)
        std::cout << std::setw(5) << " ";

    while (currentDay <= daysInMonth) {
        std::cout << std::setw(5) << currentDay;

        if ((currentDay + startingDay) % 7 == 0)
            std::cout << std::endl;

        ++currentDay;
    }

    std::cout << std::endl;
}

calendarType::calendarType(int month, int year) : firstDate(month, 1, year) {
    assert(month >= 1 && month <= 12);
    assert(year >= 1900);
    firstDay.setDay("Monday");
    firstDayOfMonth();
}

void calendarType::setMonth(int month) {
    assert(month >= 1 && month <= 12);
    firstDate.setMonth(month);
    firstDayOfMonth();
}

void calendarType::setYear(int year) {
    assert(year >= 1900);
    firstDate.setYear(year);
    firstDayOfMonth();
}

int calendarType::getMonth() const {
    return firstDate.getMonth();
}

int calendarType::getYear() const {
    return firstDate.getYear();
}

void calendarType::printCalendar() const {
    printCalendarTitle();
    printCalendarHeadings();
    printCalendarDays();
}