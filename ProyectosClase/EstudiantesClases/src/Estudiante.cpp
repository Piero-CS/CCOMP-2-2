#include "Estudiante.h"
#include <iostream>

Estudiante::Estudiante()
{
    name = "Sin nombre";
    edad = 0;
}

Estudiante::Estudiante(std::string n, int e)
{
    name = n;
    edad = e;
}

void Estudiante::mostrar() const
{
    std::cout << "Nombre de Alumno: " << name << ", Edad: " << edad << std::endl;
}

Estudiante::~Estudiante()
{
    //dtor
}
