#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
    public:
        explicit Student(std::string n, int a): name(n), age(a) {} //Lista de Inicializacion
        bool isOlder() const;
        virtual ~Student();

    private:
        std::string name;
        int age;
};

#endif // STUDENT_H
