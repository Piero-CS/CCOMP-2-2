#include <iostream>
#include "IntergerArray.h"

int main()
{
    IntergerArray ia(3);
    ia.setData(10, 0);
    ia.setData(20, 1);
    ia.setData(30, 2);
    ia.print();
    return 0;
}
