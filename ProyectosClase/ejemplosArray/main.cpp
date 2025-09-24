#include <iostream>

//using namespace std;


//Intercambio
void intercambio(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

//Imprimir el array
void print(int arr[], int tam)
{
    std::cout << "[ ";
    for(int i{0}; i < tam; i++)
        std::cout << arr[i] << " ";
    std::cout << "]" << std::endl;
}

//Invertir elementos de un array
void invertir(int arr[], int tam)
{
    int inicio{0}, fin{tam-1};
    while (inicio < fin)
    {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        inicio++;
        fin--;
    }
}

void invertirRecursivo(int arr[], int tam, int i = 0)
{
    if(i >= tam - i - 1) return;
    else
    {
        int temp = arr[i];
        arr[i] = arr[tam - i - 1];
        arr[tam - i - 1] = temp;
        invertirRecursivo(arr, tam, i + 1);
    }
}

void invertirReferencia(int arr[], int tam, int i = 0)
{
    if(i >= tam - i - 1) return;
    else
    {
        intercambio(arr[i], arr[tam - i - 1]);
        invertirRecursivo(arr, tam, i + 1);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    std::cout << "Array original: ";
    print(arr, 5);
    invertirReferencia(arr, 5);
    std::cout << "Array invertido: ";
    print(arr, 5);
    return 0;
}
