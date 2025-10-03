#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << arr << std::endl;
    std::cout << &arr[0] << std::endl;
    std::cout << &arr[1] << std::endl;
    std::cout << &arr[2] << std::endl;
    std::cout << &arr[3] << std::endl;
    std::cout << &arr[4] << std::endl;

    int* ptr = arr;
    std::cout << *ptr << std::endl;
    ptr++;
    std::cout << *ptr << std::endl;
    ptr++;
    std::cout << *ptr << std::endl;
    ptr++;
    std::cout << *ptr << std::endl;
    ptr++;
    std::cout << *ptr << std::endl;
    ptr++;

    std::cout << "====== Usando For ======" << std::endl;

    int* ptr2 = arr;
    for(int i = 0; i < 5; i++, ptr2++)
        std::cout << *ptr2 << " ";
    std::cout << std::endl;

    int* ptr3 = arr + 4;
    for(int i = 0; i < 5; i++, ptr3--)
        std::cout << *ptr3 << " ";
    std::cout << std::endl;

    std::cout << "====== Usando While ======" << std::endl;

    int* ptr4 = arr;
    while(ptr4 < (arr+5))
    {
        std::cout << *ptr4 << " ";
        ptr4++;
    }
    std::cout << std::endl;

    int* ptr5 = arr+4;
    while(ptr5 >= arr)
    {
        std::cout << *ptr5 << " ";
        ptr5--;
    }


}
