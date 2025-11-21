#include <iostream>
#include "Student.h"

int main()
{
    Student p1("Pedro", 14);
    Student p2("Juan", 18);
    std::cout << "Es mayor: "<<p1.isOlder() << std::endl;
    std::cout << "Es mayor: "<<p2.isOlder() << std::endl;
    return 0;
}
