#include <iostream>

//using namespace std;

long sumar(int arr[], int tam)
{
    if (tam == 0) return 0;
    else return arr[tam - 1] + sumar(arr, tam - 1);
}

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << std::endl;
    std::cout << "La suma del array es: " << sumar(arr, 5);
    return 0;
}
