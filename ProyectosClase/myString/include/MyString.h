#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

class MyString
{
    public:
        MyString(char *data);
        int getSize() const;
        char* getData() const;

        void toUpper();
        void toLower();
        ~MyString();

    private:
        char* texto;
        int longitud;
};

#endif // MYSTRING_H
