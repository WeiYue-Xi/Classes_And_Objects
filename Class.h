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
    void Init(int year,int month,int day)
    {
        _day = day;
        _month = month;
        _year = year;
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