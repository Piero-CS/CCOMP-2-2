#include <iostream>
#include "DynamicIntegerArray.h"

int main()
{
    DynamicIntegerArray arr1;
    std::cout << "Tamano del array por defecto: " << arr1.getSize() << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    DynamicIntegerArray arr2(arr, 5);
    std::cout << "Tamano del array: " << arr2.getSize() << std::endl;


    arr2.print();
    arr2.push_back(10);
    arr2.print();
    arr2.insert(30, 2);
    arr2.print();
    arr2.remove(1);
    arr2.print();
    return 0;
}
