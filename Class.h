//
// Created by 24242 on 2026/10/3.
//

#ifndef CLASSES_AND_OBECTS_CLASS_H
#define CLASSES_AND_OBECTS_CLASS_H
#include <iostream>
#include <assert.h>

using namespace std;

class  Date
{
public:
    Date()
    {
        _year = 1;
        _month = 1;
        _day = 1;
    }
    Date(int year,int month,int day)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    //拷贝构造
    Date(Date& d)
    {
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }

    int getMonthDay(int year,int month)
    {
        assert(month > 0 && month < 13);
        static int monthDayArray[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};

        if (month == 2 && (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            return monthDayArray[month] + 1;
        }

        return monthDayArray[month];
    }

    void Print();

    bool operator==(const Date& x)
    {
        return _year == x._year && _month == x._month && _day == x._day;
    }

    Date& operator+=(int day);

    //d1 + 100
    Date operator+(int day);

    Date& operator-=(int day);
    Date operator-(int day);
    //日期-日期
    int operator-(const Date& d);

    //比较日期

    //++日期
    Date operator++();
    //日期++
    Date operator++(int);
private:
    int _year;
    int _month;
    int _day;
};



#endif //CLASSES_AND_OBECTS_CLASS_H