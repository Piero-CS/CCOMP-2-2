#include <iostream>

void printMatriz(char **matriz, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return;
}
int main()
{
    //Input de filas
    int n{0};
    std::cout << "Ingrese n: ";
    std::cin >> n;

    if(n < 2)
    {
        std::cout << "\nn invalido (debe ser mayor a 2)\n";
        return 0;
    }

    char **ptr_matriz{nullptr};
    ptr_matriz = new char *[n];
    for(int i = 0; i < n; i++)
    {
        ptr_matriz[i] = new char[n];
        for(int j = 0; j < n; j++)
        {
            ptr_matriz[i][j] = ' ';
        }
    }

    //Imprimir matriz
    printMatriz(ptr_matriz, n);

    //Borrado de punteros
    for(int i = 0; i < n; i++)
    {
        delete[] ptr_matriz[i];
    }
    delete[] ptr_matriz;
}
