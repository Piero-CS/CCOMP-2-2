#include <iostream>

//using namespace std;
int contadorPalabra(std::string cadena, char letra)
{
    int contador{0}, i{0};
    while(i < cadena.length()) //for ( int i{0}, int contador{0}; i < cadena.lenght(), i++)
    {
        if (cadena.at(i) == letra)
            contador++;
        i++;
    }
    return contador;
}

bool esPalindromo(std::string cadena)
{
    int inicio{0}, fin{cadena.length() - 1};
    bool esPalindromo{true};
    while(inicio < fin){
        if(cadena.at(inicio) != cadena.at(fin)){
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

void intercambioValores(int &a, int &b)
{
    int t{a};
    a = b;
    b = t;
}

int main()
{
    std::string cadena1, cadena2;
    char letra{' '};
    int a{0}, b{0};
    /*
    std::cout << "================= Contador de Letras =================" << std::endl;
    std::cout << "Ingrese una oracion: ";
    getline(std::cin, cadena1);
    std::cout << "Ingrese la letra a buscar: ";
    std::cin >> letra;
    std::cout << "El numero de '" << letra << "' en '" << cadena1 << "' es " << contadorPalabra(cadena1, letra) << std::endl;

    std::cout << "============= Palindromo =================" << std::endl;
    std::cout << "Ingrese una palabra: ";
    std::cin >> cadena2;
    ((esPalindromo(cadena2)) ? std::cout << "Es palindromo": std::cout << "No es palindromo"); */

    std::cout << "============= Intercambio de valores =================" << std::endl;
    std::cout << "Ingrese a: ";
    std::cin >> a;
    std::cout << "Ingrese b: ";
    std::cin >> b;
    intercambioValores(a, b);
    std::cout << "Los nuevos valores de a y b son: a = " << a << " y b = " << b;
    return 0;
}
