#include <iostream>

int main()
{
    /*
    int* ptr1;
    int x{10};
    ptr1 = &x;

    std::cout << *ptr1 << std::endl;
    *ptr1 = 1000;
    std::cout << x << std::endl;

    int* ptr2= &x;
    *ptr2 = 5000;
    std::cout << x << std::endl;
    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
    return 0;
    */

    double y{3.1415};
    double* ptr3 = &y;
    *ptr3 *= 2;
    std::cout << y << std::endl;

}
