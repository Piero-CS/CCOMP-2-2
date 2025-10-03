#include <iostream>

int contarCarac(char *ptr, char car)
{
    int cont{0};
    while(*ptr != '0')
    {
        if(*ptr == car)
        {
            cont++;
        }
        ptr++;
    }
    return cont;
}

int main()
{
    char cad[] = "Ciencias de la Computacion";
    std::cout << contarCarac(cad, 'e');
    return 0;
}
