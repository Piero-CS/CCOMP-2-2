#include "Student.h"

bool Student::isOlder() const
{
    if(age >= 18) return true;
    return false;
}

Student::~Student()
{
    //dtor
}
