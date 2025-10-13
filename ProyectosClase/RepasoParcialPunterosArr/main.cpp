#include <iostream>
void print(int *arr, int tam)
{
    std::cout << "[ ";
    for(int i{0}; i < tam; i++)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << "]" << std::endl;
}

void printPtr(int *arr, int tam)
{
    std::cout << "[ ";
    for(int i{0}; i < tam; i++, arr++)
    {
        std::cout << *(arr) << " ";
    }
    std::cout << "]" << std::endl;
}

void invertir(int *arr, int tam)
{
    int *inicio = arr;
    int *fin = arr + tam - 1;

    while(inicio < fin)
    {
        int tmp = *inicio;
        *inicio = *fin;
        *fin = tmp;

        inicio++;
        fin--;
    }
}

int mayorElemento(int *arr, int tam)
{
    int mayor = *arr;
    for(int i{1}; i < tam; i++)
    {
        if (arr[i] > mayor)
            mayor = arr[i];
    }
    return mayor;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    print(arr, tam);
    invertir(arr, tam);
    printPtr(arr, tam);
    std::cout << mayorElemento(arr, tam);
    return 0;
}
