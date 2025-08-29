#include <iostream>

int main()
{
    int edad{0};
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    if (edad <= 0 || edad >= 100)
    {
        std::cout << "Edad falsa" << std::endl;
    }
    else if (edad >= 18)
    {
        std::cout << "Eres mayor de edad" << std::endl;
    }
    else
    {
        std::cout << "Eres menor de edad" << std::endl;
    }
    return 0;
}
