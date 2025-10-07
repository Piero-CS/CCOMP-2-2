#include <cstdlib>
#include <ctime>
#include <iostream>

#ifdef _WIN32
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #define CLEAR_COMMAND "clear"
#endif

void caratula()
{
    std::system(CLEAR_COMMAND);            // Limpiar pantalla
    std::cout << "\x1B[H";                 // Cursor en esquina superior izquierda

    std::cout << "\x1B[1;36;44m";          // Color azul de fondo con texto destacado
    std::cout << "/***************************************************/" << std::endl;
    std::cout << "\x1B[m";                 // Resetear color
    std::cout << "\x1B[31;1mUniversidad Catolica San Pablo\x1B[m" << std::endl;
    std::cout << "\x1B[33;1mEscuela Profesional de Ciencia de la Computacion\x1B[m" << std::endl;
    std::cout << "\x1B[37;1mCurso: Ciencias de la Computacion I\x1B[m" << std::endl;
    std::cout << "\x1B[37;1mGrupo: CCOMP 2-2\x1B[m" << std::endl;
    std::cout << "\x1B[38;5;46mProf. D.Sc. Manuel Eduardo Loaiza Fernandez\x1B[m" << std::endl;
    std::cout << "\x1B[38;5;226mAutor: Piero Alejandro Coaguila Sanchez\x1B[m" << std::endl;
    std::cout << "\x1B[38;5;214mFecha: 29/09/2025\x1B[m" << std::endl;
    std::cout << "\x1B[1;36;44m";
    std::cout << "/***************************************************/" << std::endl;
    std::cout << "\x1B[m";                 // Resetear color
}

void burbuja(int matriz[], int tam)
{
    for(int i{0}; i < tam; i++)
    {
        for(int j{0}; j < tam - 1 - i; j++) // -1 para no exceder en j+1, -i para no volver a iterar una vez más (ultimo elemento ordenado)
        {
            if(matriz[j] < matriz[j+1])
            {
                int tmp = matriz[j];
                matriz[j] = matriz[j+1];
                matriz[j+1] = tmp;
            }
        }
    }
}

void imprimir(int matriz[10][10])
{
    for(int i{0};i<10;i++)
	{
		for(int j{0};j<10;j++)
		{
			std::cout<< matriz[i][j] << " | " ;
		}
		std::cout<<std::endl;
    }
}

bool esPrimo(int n)
{
    if (n <= 1) return false;
    for(int i{2}; (i * i) <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    caratula();
    // semilla aleatoria
	std::srand(std::time({})); // use current time as seed for random generator

    //Creacion de Matriz
    int matriz[10][10], matrizOrdenada[10][10], primos[100], noprimos[100], idxPrimos{0}, idxNoPrimos{0};

    //Llenado aleatorio y llenado individual de matrices
    for(int i{0}; i < 10; i++)
    {
        for(int j{0}; j < 10; j++)
        {
            int val = std::rand() % 101;
            matriz[i][j] = val;
            if(esPrimo(val))
            {
                primos[idxPrimos] = val;
                idxPrimos++;
            }
            else
            {
                noprimos[idxNoPrimos] = val;
                idxNoPrimos++;
            }
        }
    }
    //Ordenar de mayor a menor
    burbuja(primos, idxPrimos);
    burbuja(noprimos, idxNoPrimos);

    //Llenado de matriz 10x10
    int nprimos{0}, nnoprimos{0};
    for(int i{0}; i < 10; i++)
    {
        for(int j{0}; j < 10; j++)
        {
            if(nprimos < idxPrimos)
            {
                matrizOrdenada[i][j] = primos[nprimos];
                nprimos++;
            }
            else if(nnoprimos < idxNoPrimos)
            {
                matrizOrdenada[i][j] = noprimos[nnoprimos];
                nnoprimos++;
            }
        }
    }

    //Imprimir matriz
    std::cout << "Matriz Original" << std::endl;
    imprimir(matriz);
    std::cout << std::endl << "Matriz Ordenada" << std::endl;
;
    imprimir(matrizOrdenada);

    return 0;
}
