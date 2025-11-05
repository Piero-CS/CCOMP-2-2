#include "MyString.h"

MyString::MyString(char *data)
{
    longitud = 0;
    while(data[longitud] != '\0')
    {
        longitud++;
    }
    texto = new char[longitud + 1];
    for(int i{0}; i < longitud; i++)
    {
        texto[i] = data[i];
    }
    texto[longitud] = '\0';
}

void MyString::toUpper()
{
    for(int i{0}; i < longitud; i++)
    {
        if(texto[i] >= 97 && texto[i] <= 122)
        {
            texto[i] -= 32;
        }
    }
    return;
}

void MyString::toLower()
{
    for(int i{0}; i < longitud; i++)
    {
        if(texto[i] >= 65 && texto[i] <= 90)
        {
            texto[i] += 32;
        }
    }
}

int MyString::getSize() const
{
    return longitud;
}

char* MyString::getData() const
{
    return texto;
}
MyString::~MyString()
{
    delete[] texto;
}
