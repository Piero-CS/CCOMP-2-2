#include "MyString.h"

int longitudCadena(char* data)
{
    int contador = 0;
    while(data[contador] != '\0')
    {
        contador++;
    }
    return contador;
}

void copiarString(char* data, char* texto)
{
    int contador = 0;
    while(data[contador] != '\0')
    {
        texto[contador] = data[contador];
        contador++;
    }
    return;
}

MyString::MyString(char *data)
{
    int longitud = longitudCadena(data);
    texto = new char[longitud + 1];
    copiarString(data, texto);
}

void MyString::mostrar() const
{
    std::cout << texto << std::endl;
}
MyString::~MyString()
{
    delete[] texto;
}
