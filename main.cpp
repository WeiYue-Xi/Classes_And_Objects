#include <iostream>

#include "Class.h"

using namespace std;

int main()
{
    Date d1(2023,1,1);
    Date d2(2022,12,20);

    Date d3 = d1 + 379;
    d1.Print();
    d3.Print();

    return 0;
}