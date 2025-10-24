#include <iostream>
int sumArrayRec(int *ptr, int tam)
{
    if(tam == 0)
    {
        return 0;
    }
    return *ptr + sumArrayRec(++ptr, --tam);
}
int sumArray(int *ptr, int tam)
{
    int sum{0};
    for(int i{0}; i < tam; i++, ptr++)
    {
        sum += *ptr;
    }
    return sum;
}

void intercambio(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int *ptr, int tam)
{
    for(int i{0}; i < tam - 1; i++)
    {
        for(int j = 0; j < tam - i - 1; j++)
        {
            if(*(ptr + j) > *(ptr + j + i))
            {
                intercambio(ptr + j, ptr + j + 1);
            }
        }
    }
    return;
}

/**
InsertionSort
Mergesort
Quicksort
**/
int main()
{
    int tam{5};
    int *ptr = new int[tam];
    ptr[0] = 5;
    ptr[1] = 6;
    ptr[2] = 9;
    ptr[3] = 4;
    ptr[4] = 3;

    for(int i{0}; i < tam; i++)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << sumArray(ptr, tam) << std::endl;

    bubbleSort(ptr, tam);

    for(int i{0}; i < tam; i++)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    delete ptr;
    return 0;
}
