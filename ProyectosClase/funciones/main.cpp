#include <iostream>

//using namespace std;

int potencia(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++) ///i++ (post-incremento) - ++i (pre-incremento)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base{0}, exp{0};
    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exp;
    std::cout << base << " a la " << exp << " es igual a " << potencia(base, exp);
    return 0;
}
