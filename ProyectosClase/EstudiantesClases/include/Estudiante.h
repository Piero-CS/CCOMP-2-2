#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

class Estudiante
{
    private:
        std::string name;
        int edad;

    public:
        Estudiante();
        Estudiante(std::string n, int e);
        void mostrar() const;
        ~Estudiante();
};

#endif // ESTUDIANTE_H
