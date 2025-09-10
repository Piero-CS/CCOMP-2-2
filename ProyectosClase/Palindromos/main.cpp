#include <iostream>

//using namespace std;

int main()
{
    /**Escribir un programa que pida un numero (3, 9 digitos) y evalue si es un palindromo**/
    long long num{0}, original{0}, invertido{0};
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    original = num;
    while(num > 0)
    {
        int resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }
    if(original == invertido){
        std::cout << "Es palindromo";
    }
    else{
        std::cout << "No es palindromo";
    }
    return 0;
}
