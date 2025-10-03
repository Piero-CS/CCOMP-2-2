#include <iostream>

void printArray(int* arr, int tam)
{
    std::cout << "[ ";
    for(int i = 0; i < tam; i++, arr++)
        std::cout << *arr << " ";
    std::cout << "]" << std::endl;
}

void intercambio(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void invertirArray(int* ini, int* fin)
{
    while (ini < fin){
        intercambio(ini++, fin--);
    }
}

void invertirArrayRecursivo(int* ini, int* fin)
{
    if(ini >= fin) return;
    else
    {
        intercambio(ini, fin);
        invertirArrayRecursivo(++ini, --fin);
        return;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, tam);
    std::cout << "=============" << std::endl;
    int x{10}, y{20};
    intercambio(&x, &y);
    std::cout << x << std::endl; //20
    std::cout << y << std::endl; //10
    std::cout << "=============" << std::endl;
    invertirArrayRecursivo(arr, arr+tam-1);
    printArray(arr, tam);
    return 0;
}
