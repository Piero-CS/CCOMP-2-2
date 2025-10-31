#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

class MyString
{
    public:
        MyString(char *data);
        void mostrar() const;
        ~MyString();

    private:
        char* texto;
};

#endif // MYSTRING_H
