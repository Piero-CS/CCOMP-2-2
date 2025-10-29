#include "Point.h"
#include <iostream>

Point::Point()
{
    x = 0;
    y = 0;
    std::cout << "Llamando a constructor" << std::endl;
}

Point::Point(int x_, int y_)
{
    x = x_;
    y = y_;
    std::cout << "Llamando a constructor con parametros" << std::endl;
}

Point::~Point()
{
    std::cout << "Llamando a destructor" << std::endl;
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
