#include "calendarType.h"
#include <iostream>
#include <iomanip>
#include <cassert>

void calendarType::firstDayOfMonth() {
    // Implement the logic to determine the day of the week for the first day of the month
    // based on the number of days between 1/1/1900 and the given month and year
    // Set the firstDay instance variable accordingly
}

void calendarType::printCalendarTitle() const {
    // Print the calendar title using the month and year
}

void calendarType::printCalendarHeadings() const {
    // Print the column headings for the calendar (Sun, Mon, Tue, etc.)
}

void calendarType::printCalendarDays() const {
    // Print the day numbers for the calendar
    // Determine the number of days in the month and figure out the appropriate offset
    // to place day 1 on the correct day of the week
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