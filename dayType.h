#pragma once
#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>
using namespace std;

class dayType {
public:
    // Constructors
    dayType();
    dayType(const string& day);

    // Setter functions
    void setDay(const string& day);

    // Getter functions
    string getDay() const;

    // Other member functions
    string getNextDay() const;
    string getPreviousDay() const;
    void addDays(int days);

    // Print function
    void print() const;

private:
    string day;
    static const string daysOfWeek[];
};

#endif