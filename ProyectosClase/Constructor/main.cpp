#include <iostream>
#include "Point.h"

/** Constructor (mismo nombre de la clase):
*   Metodo que se invoca cuando se crear una instancia
*   Metodo que se invoca cuando se asigna memoria a una instancia
*
*   Destructor (tiene el mismo nombre con (~) antes)
*   Metodo que se invoca cuando se libera la memoria de una instancia
***/

int main()
{
    Point p1;
    p1.print();
    std::cout << std::endl;

    Point* p2 = new Point;
    p2 -> print(); /**(*ptr).print() **/
    std::cout << std::endl;

    Point p3(4, 5);
    p3.print();
    std::cout << std::endl;

    Point *p4 = new Point(2, 7);
    p4 -> print();
    std::cout << std::endl;

    delete p2;
    delete p4;
    return 0;
}
