#pragma once
#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
public:
    // Constructors
    dateType(int m = 1, int d = 1, int y = 1900);

    // Setter functions
    void setDate(int m, int d, int y);
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    // Getter functions
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Other member functions
    bool isLeapYear() const;
    int daysInMonth() const;
    void print() const;
    int daysPassed() const;
    int daysRemaining() const;
    void addDays(int days);

private:
    int month;
    int day;
    int year;
};

#endif