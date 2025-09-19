#include <iostream>

//using namespace std;

long sumar(int arr[], int tam)
{

    int sum{0};
    for(int i = 0; i < tam; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    return 0;
}
