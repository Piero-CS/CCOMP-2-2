#include <iostream>

//using namespace std;

int main()
{
    //Es primo//
    int num{0}, divisor{2};
    bool primo{true};
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
    if (primo && num != 1) std::cout << "Es un numero primo";
    else
        std::cout << "No es un numero primo";


    std::cout << std::endl;

    //Numeros primos menores que un numero//
    int n{0}, d{2};
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    while(d < n)
    {
        int i{2};
        bool prime = true;
        while(i < d)
        {
            if (d % i == 0)
            {
                prime = false;
                break;
            }
            i++;
        }
        if(prime) std::cout << d << std::endl;
        d++;
    }
    return 0;
}
