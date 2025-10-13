#include <iostream>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

int suma(int *p, int tam)
{
    int suma{0};
    for(int i{0}; i < tam; i++, p++)
    {
        suma += *(p);
    }
    return suma;
}

int main()
{
    int x{10};
    int* ptr{nullptr};
    ptr = &x;
    *ptr = 25;
    std::cout << &x << std::endl;
    std::cout << *ptr << std::endl;
    int arr[5] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    std::cout << suma(arr, tam) << std::endl;
    int a = 3, b = 7;
    swap(&a, &b);
    std::cout << "a: " << a << "  b: " << b << std::endl;

    return 0;
}
