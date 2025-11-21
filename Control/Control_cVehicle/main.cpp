#include <iostream>
#include "Car.h"
#include "Truck.h"

int main()
{
    int n{3};

    Vehicle *vehiculos = new Vehicle[n];

    Car c1("321FAS", 2007, 120, 4);
    Car c2("352GSE", 2000, 130, 2);
    Truck t3("421GDS", 2017, 60, 500);

    vehiculos[0] = c1;
    vehiculos[1] = c2;
    vehiculos[2] = t3;

    for(int i{0}; i < n; i++)
    {
        std::cout << vehiculos[i].getLicense() << std::endl;
        std::cout << vehiculos[i].getYear() << std::endl;
        std::cout << std::endl;
    }
    return 0;
}
