#ifndef EXTDATETYPE_H
#define EXTDATETYPE_H

#include "dateType.h"
#include <string>

class extDateType : public dateType {
public:
    extDateType();
    extDateType(int month, int day, int year);
    void setDate(int month, int day, int year);
    void setMonth(int month);
    void setYear(int year);
    void printLongDate() const;
    void printLongMonthYear() const;
    std::string getMonthName() const;

private:
    std::string monthName;
    static const std::string monthNames[];
};

#endif