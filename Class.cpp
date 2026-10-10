//
// Created by 24242 on 2026/10/3.
//

#include "Class.h"

#include <iostream>

using namespace std;

void Date::Print()
{
    cout << _year << " "<< _month << " " << _day << endl;
}


Date& Date::operator+=(int day)
{
    _day += day;
    while (_day > getMonthDay(_year,_month))
    {
        _day -= getMonthDay(_year,_month);
        ++_month;
        if (_month == 13)
        {
            _month = 1;
            _year++;
        }
    }

    return *this;
}

Date Date::operator+(int day)
{
    Date tmp(*this);
    tmp._day += day;
    while (tmp._day > getMonthDay(tmp._year,tmp._month))
    {
        tmp._day -= getMonthDay(tmp._year,tmp._month);
        ++tmp._month;
        if (tmp._month == 13)
        {
            tmp._month = 1;
            tmp._year++;
        }
    }
    return tmp;
}
