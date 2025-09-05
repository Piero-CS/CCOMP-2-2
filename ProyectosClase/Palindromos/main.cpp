#include <iostream>

//using namespace std;

int main()
{
    /**Escribir un programa que pida un numero (3, 9 digitos) y evalue si es un palindromo**/
    long long num{0}, copia{0};
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    long long original = num;
    while (num > 0)
    {
        int digito = num % 10;
        std::cout << digito;
        break;
    }
    return 0;
}
