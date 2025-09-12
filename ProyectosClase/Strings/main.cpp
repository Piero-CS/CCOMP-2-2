#include <iostream>

//using namespace std;

int main()
{
    std::string cadena = "Ciencias de la Computacion";
    int i{0};
    while(cadena.at(i) != '\0')
        ++i;
    std::cout << i;
    return 0;
}
