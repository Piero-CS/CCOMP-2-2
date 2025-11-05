#include <iostream>
#include "MyString.h"

int main()
{
    MyString cad1("Ciencias de la Computacion");
    std::cout << cad1.getData() << std::endl;
    std::cout << cad1.getSize() << std::endl;
    cad1.toUpper();
    std::cout << cad1.getData() << std::endl;
    cad1.toLower();
    std::cout << cad1.getData() << std::endl;
    return 0;
}
