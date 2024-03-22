#pragma once
#ifndef CALENDARTYPE_H
#define CALENDARTYPE_H

#include "extDateType.h"
#include "dayType.h"

class calendarType {
private:
    dayType firstDay;
    extDateType firstDate;

    void firstDayOfMonth();
    void printCalendarTitle() const;
    void printCalendarHeadings() const;
    void printCalendarDays() const;

public:
    calendarType(int month, int year);
    void setMonth(int month);
    void setYear(int year);
    int getMonth() const;
    int getYear() const;
    void printCalendar() const;
};

#endif