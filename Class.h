//
// Created by 24242 on 2026/10/3.
//

#ifndef CLASSES_AND_OBECTS_CLASS_H
#define CLASSES_AND_OBECTS_CLASS_H
#include <iostream>

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

    void Print()
    {
        cout << _year << ": " << _month << ": " << _day << endl;
    }
private:
    int _year;
    int _month;
    int _day;
};



#endif //CLASSES_AND_OBECTS_CLASS_H