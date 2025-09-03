#include <iostream>

//using namespace std;

int main()
{
    int num{0};
    int divisor{2};
    bool primo = true;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    while(divisor < num)
    {
        if (num % divisor == 0)
        {
            primo = false;
            break;
        }
        divisor++;
    }
    if (primo && num != 1)
        std::cout << "Es un numero primo";
    else
        std::cout << "No es un numero primo";


    std::cout << std::endl;

    /** Imprimir los numeros primos menores a un input del usuario**/
    }
}
