#include <iostream>
#include "DynamicIntegerArray.h"

int main()
{
    DynamicIntegerArray da;
    da.print();
    da.push_back(1);
    da.push_back(2);
    da.push_back(3);
    da.push_back(4);
    da.push_back(5);
    std::cout << std::endl;
    da.print();
    if(true)
    {
        DynamicIntegerArray b = da;
    }
    std::cout << std::endl;
    da.print();
    return 0;
}
