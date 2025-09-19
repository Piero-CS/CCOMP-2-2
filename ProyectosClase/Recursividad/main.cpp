#include <iostream>

//using namespace std;

int factorial(int n)
{
    if(n==1) return 1;
    else return ( n * factorial(n-1));
}

long long fibonnaci(long n)
{
    if(n == 0) return 0;
    else if (n == 1) return 1;
    else return (fibonnaci(n-1) + fibonnaci(n-2));
}
int digitos(int n)
{
    if (n < 10) return 1;
    else return (1 + digitos(n/10));
}

bool esCapicua(int n)
{
    if (n < 10) return true;
    int t{n};
    int divisor{1};

    //Hallar divisor de n mas grande
    while(t >= 10)
    {
        t /= 10;
        divisor *= 10;
    }

    int primer = n / divisor; //5225 / 1000 = 5
    int ultimo = n % 10; // 5225 % 10 = 5
    if (primer != ultimo) return false;
    n = (n % divisor) / 10; // 5225 % 5000 = (225 / 10) == 22 ---> Primer y ultimo digitos eliminados
    return(esCapicua(n));
}

int main()
{
    int n{0}, x{0}, y{0}, z{0};
    std::cout << "================= n Factorial =================" << std::endl;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    std::cout << n << "! es igual a " << factorial(n) << std::endl;
    std::cout << "================= Fibonnaci =================" << std::endl;
    std::cout << "Ingrese un fibonnaci(n): ";
    std::cin >> x;
    std::cout << "Fibonacci de " << x << " es igual a " << fibonnaci(x) << std::endl;
    for(int i = 0; i <= x; i++)
    {
        std::cout << "F(" << i << ") = " << fibonnaci(i) << std::endl;
    }
    std::cout << "================= Digitos =================" << std::endl;
    std::cout << "Ingrese un numero: ";
    std::cin >> y;
    std::cout << y << " tiene " << digitos(y) << " digitos" << std::endl;
    std::cout << "================= Capicua =================" << std::endl;
    std::cout << "Ingrese un numero: ";
    std::cin >> z;
    ((esCapicua(z)) ? std::cout << z << " es capicua": std::cout << z <<" no es capicua") << std::endl;
}
