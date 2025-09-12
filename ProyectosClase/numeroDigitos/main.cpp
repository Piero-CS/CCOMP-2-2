#include <iostream>

//using namespace std;

int numeroDigitos(long long n)
{
    int digitos{0};
    while(n > 0)
    {
        n /= 10;
        digitos++;
    }
    return digitos;
}
int main()
{
    long long n{0};
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    std::cout << "El numero de digitos de " << n << " es: " << numeroDigitos(n);
    return 0;
}
