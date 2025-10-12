#include <cstdlib>
#include <ctime>
#include <iostream>

void printMatriz(char **matriz, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return;
}

void llenar(char *matriz, int n, int inicio, int fin) //matriz, logitud de matriz, inicio ASCII, fin ASCII
{
    for(int i{0}; i < n; i++)
    {
        int random_value = std::rand() % (fin - inicio + 1);
        char c = inicio + random_value;
        if(c >= inicio && c <= fin)
            matriz[i] = c;
    }
    return;
}

int main()
{
    //Input de filas y columnas
    int n{0}, m{0};
    std::cout << "Ingrese n: ";
    std::cin >> n;
    std::cout << "Ingrese m: ";
    std::cin >> m;

    //Creacion de puntero
    char **ptr_matriz{nullptr};
    ptr_matriz = new char *[n];
    for(int i = 0; i < n; i++)
    {
        ptr_matriz[i] = new char[m];
    }

    std::srand(std::time(nullptr));

	//Generar numero random de mayusculas, minusculas
	int nmay = std::rand() % (n * m + 1);
	int nmin = (n * m) - nmay;

    //Creacion de Listas
    char *ptr_mayus{nullptr};
    char *ptr_minus{nullptr};
    ptr_mayus = new char[nmay];
    ptr_minus = new char[nmin];

    //Llenado de listas
    llenar(ptr_mayus, nmay, 65, 90);
    llenar(ptr_minus, nmin, 97, 122);

    //Llenar matriz n x m;
    int idxMayus = 0, idxMinus = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (idxMayus < nmay)
                ptr_matriz[i][j] = ptr_mayus[idxMayus++];
            else
                ptr_matriz[i][j] = ptr_minus[idxMinus++];
        }
    }


    //Imprimir Matriz
    printMatriz(ptr_matriz, n, m);

    //Borrado de punteros
    for(int i = 0; i < n; i++)
    {
        delete[] ptr_matriz[i];
    }
    delete[] ptr_matriz;
    delete[] ptr_mayus;
    delete[] ptr_minus;

    return 0;
}


