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

    if(n % 2 == 0)
    {
        std::cout << "\nn invalido (numero impar)\n";
        return 0;
    }

    //Creacion de puntero
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

    //Llenado de matriz
    int centro = n / 2;

    for(int i = 0; i < n; i++)
    {
        int inicio{0}, fin{0};
        if (i <= centro)
        {
            inicio = centro - i;
            fin = centro + i;
        }
        else
        {
            inicio = i - centro;
            fin = n - 1 - inicio;
        }+

        ptr_matriz[i][inicio] = '*';
        ptr_matriz[i][fin] = '*';

        for(int j = 1; j < n; j++)
        {
            if(j> inicio && j < fin)
            {
                ptr_matriz[i][j] = '@';
            }
        }
    }


    //Imprimir Matriz
    std::cout << "\nRombo generado:\n";
    printMatriz(ptr_matriz, n);

    //Borrado de punteros
    for(int i = 0; i < n; i++)
    {
        delete[] ptr_matriz[i];
    }
    delete[] ptr_matriz;
}
