#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>
using namespace std;

class dayType {
public:
    dayType();
    dayType(const string& day);
    void setDay(const string& day);
    string getDay() const;
    string getNextDay() const;
    string getPreviousDay() const;
    void addDays(int days);
    void print() const;
    int getDayNumber() const;

private:
    string day;
    static const string daysOfWeek[];
};

#endif