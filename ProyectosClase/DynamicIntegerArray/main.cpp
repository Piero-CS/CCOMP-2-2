#include <iostream>
#include "DynamicIntegerArray.h"

int main()
{
    DynamicIntegerArray arr1;
    std::cout << arr1.getSize() << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    DynamicIntegerArray arr2(arr, 5);
    std::cout << arr2.getSize() << std::endl;
    arr2.print();
    arr2.push_back(10);
    arr2.insert(30, 2);
    arr2.print();
    return 0;
}
