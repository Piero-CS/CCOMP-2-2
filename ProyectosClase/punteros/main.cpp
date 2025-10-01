#include <iostream>

int main()
{
    /**
    & -- Obtener direccion de memoria
    *ptr -- Retorna el contenido de la direccion de meomoria
    **/

    int x{10}, y{20};
    int* ptr{nullptr};
    int* ptr1{nullptr};
    ptr = &x;
    ptr1 = &y;
    std::cout << "Valor de x = " << x << std::endl;
    std::cout << "Valor de y = " << y << std::endl;
    std::cout << "Direccion de memoria de x = " << &x << std::endl;
    std::cout << "Direccion de memoria de y = " << &y << std::endl;
    std::cout << "Valor de ptr = " << ptr << " (direccion de memoria de x)" << std::endl;
    std::cout << "Direccion de memoria de ptr = " << &ptr << std::endl;
    std::cout << "Contenido del valor de ptr = " << *ptr << std::endl;
    ptr = &y;
    std::cout << "Nuevo valor de ptr = " << ptr << " (direccion de memoria de y)" << std::endl;
    std::cout << "Nuevo contenido del nuevo valor de ptr = " << *ptr << std::endl;
    if(ptr == ptr1)
        std::cout << "ptr (" << ptr << ") y ptr1 (" << ptr1 << ") tienen el mismo valor" << std::endl;


    return 0;
}
