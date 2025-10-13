#include <iostream>
float suma(float *p, int tam)
{
    float suma{0};
    for(int i{0}; i < tam; i++, p++)
    {
        suma += *(p);
    }
    return suma;
}

void printArray(float* arr, int tam)
{
    std::cout << "[ ";
    for(int i = 0; i < tam; i++, arr++)
        std::cout << *arr << " ";
    std::cout << "]" << std::endl;
    return;
}

int main()
{
    int n{0};
    std::cout << "Ingrese n: ";
    std::cin >> n;
    float* ptr = new float[n];
    for(int i{0}; i < n; i++)
    {
        std::cout << "Ingrese el i = " << i << ": ";
        std::cin >> ptr[i];
    }

    printArray(ptr, n);
    std::cout << "La suma del array es " << suma(ptr, n) << std::endl;
    std::cout << "El promedio del array es " << (suma(ptr, n) / n) << std::endl;
    delete[] ptr;
    return 0;
}
