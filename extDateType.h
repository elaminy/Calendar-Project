#ifndef EXTDATETYPE_H
#define EXTDATETYPE_H

#include "dateType.h"
#include <string>

class extDateType : public dateType {
public:
    /**
     * @brief Default constructor
     * @post The date is set to January 1, 1900
     */
    extDateType();

    /**
     * @brief Constructor with parameters
     * @param month The month (1-12)
     * @param day The day (1-31)
     * @param year The year (1900 or later)
     * @post The date is set to the specified month, day, and year
     */
    extDateType(int month, int day, int year);

    /**
     * @brief Set the date
     * @param month The month (1-12)
     * @param day The day (1-31)
     * @param year The year (1900 or later)
     * @post The date is set to the specified month, day, and year
     */
    void setDate(int month, int day, int year);

    /**
     * @brief Set the month
     * @param month The month (1-12)
     * @post The month is set to the specified value
     */
    void setMonth(int month);

    /**
     * @brief Set the year
     * @param year The year (1900 or later)
     * @post The year is set to the specified value
     */
    void setYear(int year);

    /**
     * @brief Print the date in the format "Month Day, Year"
     * @post The date is printed in the format "Month Day, Year"
     */
    void printLongDate() const;

    /**
     * @brief Print the month and year in the format "Month Year"
     * @post The month and year are printed in the format "Month Year"
     */
    void printLongMonthYear() const;

private:
    std::string monthName;
    static const std::string monthNames[];
};

#endif