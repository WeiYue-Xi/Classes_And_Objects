//
// Created by 24242 on 2026/10/3.
//

#include "Date.h"

#include <iostream>

using namespace std;

void Date::Print()
{
    cout << _year << " "<< _month << " " << _day << endl;
}

//先加等后加，拷贝次数少
Date& Date::operator+=(int day)
{
    if (day < 0)
    {
        return *this -= -day;
    }
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
    tmp += day;

    return tmp;
}

//先减后减等，拷贝次数多
Date& Date::operator-=(int day)
{
    *this = *this -day;
    return *this;
}


Date Date::operator-(int day)
{
    Date tmp(*this);
    if (tmp._day < 0)
    {
        return tmp += -day;
    }
    tmp._day -= day;
    while (tmp._day < 1)
    {
        tmp._month--;
        if (tmp._month == 0)
        {
            tmp._month = 12;
            tmp._year--;
        }
        tmp._day += getMonthDay(tmp._year,tmp._month);
    }
    return tmp;
}

int Date::operator-(Date& x)
{
    Date max = *this;
    Date min = x;
    int flag = 1;
    if (*this < x)
    {
        max = x;
        min = *this;
        flag = -1;
    }
    int count = 0;
    while (min != max)
    {
        ++min;
        ++count;
    }
    return count * flag;
}

bool Date::operator==(const Date& x)
{
    return _year == x._year && _month == x._month && _day == x._day;
}

bool Date::operator!=(const Date &x)
{
    return !(*this == x);
}


bool Date::operator<(const Date& x)
{
    if (_year < x._year)
    {
        return true;
    } else if (_year == x._year && _month < x._month)
    {
        return true;
    }else if (_year == x._year && _month == x._month && _day < x._day)
    {
        return true;
    }
    return false;
}

bool Date::operator<=(const Date& x)
{
    return *this < x || *this == x;
}

bool Date::operator>(const Date &x)
{
    return !(*this <= x);
}

bool Date::operator>=(const Date &x)
{
    return !(*this < x);
}

Date& Date::operator++()
{
    *this += 1;
    return *this;
}

Date Date::operator++(int)
{
    Date tmp(*this);
    *this += 1;
    return tmp;
}

Date& Date::operator--()
{
    *this -= 1;
    return *this;
}

Date Date::operator--(int)
{
    Date tmp(*this);
    *this -= 1;
    return tmp;
}
