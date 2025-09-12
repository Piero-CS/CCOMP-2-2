#include <iostream>

//using namespace std;

bool esPrimo(int n)
{
    if (n <= 1) return false;
    for(int i = 2; i * i < n; i++)
        if (n%i == 0) return false;
    return true;
}

void primosMenores(int n)
{
    if (n <= 1) return;
    for(int i = 2; i < n; i++)
    {
        if(esPrimo(i))
            std::cout << i << std::endl;
    }
}

int main()
{
    int n{0};
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    std::cout << "El numero " << n << " es primo: " << ((esPrimo(n)) ? "Si" : "No") << std::endl;
    std::cout << "Numeros primos menores a " << n << ": " << std::endl;
    primosMenores(n);


}
