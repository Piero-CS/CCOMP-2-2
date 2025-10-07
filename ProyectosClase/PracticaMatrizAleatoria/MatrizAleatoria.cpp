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

void llenar(char matriz[], int n, int inicio, int fin) //matriz, logitud de matriz, inicio ASCII, fin ASCII
{
    for(int i{0}; i < n; i++)
    {
        int random_value = std::rand() % (fin - inicio + 1);
        char c = inicio + random_value;
        if(c >= inicio && c <= fin)
            matriz[i] = c;
    }
}

void burbuja(char matriz[], int tam, bool ascendente)
{
    if(ascendente)
    {
        for(int i{0}; i < tam; i++)
        {
            for(int j{0}; j < tam - 1 - i; j++) // -1 para no exceder en j+1, -i para no volver a iterar una vez más (ultimo elemento ordenado)
            {
                if(matriz[j] > matriz[j+1])
                {
                    char tmp = matriz[j];
                    matriz[j] = matriz[j+1];
                    matriz[j+1] = tmp;
                }
            }
        }
    }
    else
    {
        for(int i{0}; i < tam; i++)
        {
            for(int j{0}; j < tam - 1 - i; j++) // -1 para no exceder en j+1, -i para no volver a iterar una vez más (ultimo elemento ordenado)
            {
                if(matriz[j] < matriz[j+1])
                {
                    char tmp = matriz[j];
                    matriz[j] = matriz[j+1];
                    matriz[j+1] = tmp;
                }
            }
        }
    }
}

void imprimir(char matriz[8][8])
{
    for(int i{0};i<8;i++)
	{
		for(int j{0};j<8;j++)
		{
			std::cout<< matriz[i][j] << " | " ;
		}
		std::cout<<std::endl;
    }
}

int main()
{
    caratula();
	// Semilla aleatoria
	std::srand(std::time({})); // use current time as seed for random generator

	//Generar numero random de mayusculas, minusculas y numeros
	int nmay = std::rand() % 65;
	int max_min = 64 - nmay;
	int nmin = (max_min > 0)? std::rand() % (max_min + 1) : 0; //Genera error std::rand % 0
	int nnum = 64 - nmay - nmin;

    // Crear una matriz 8x8 con letras mayusculas, minusculas y numeros
	char matriz[8][8];
	char mayusculas[nmay];
	char minusculas[nmin];
	char numeros[nnum];

    //Llenar matrices individuales
    llenar(mayusculas, nmay, 65, 90);
    llenar(minusculas, nmin, 97, 122);
    llenar(numeros, nnum, 48, 57);

    //Ordenar matrices individuales
    burbuja(minusculas, nmin, true);
    burbuja(mayusculas, nmay, false);
    burbuja(numeros, nnum, true);

    //Llenar matriz 8x8
    int idxMayus{0}, idxMinus{0}, idxNum{0};
    for(int i{0}; i < 8; i++)
    {
        for(int j{0}; j < 8; j++)
        {
            if(idxMinus < nmin)
            {
                matriz[i][j] = minusculas[idxMinus];
                idxMinus++;
            }
            else if(idxMayus < nmay)
            {
                matriz[i][j] = mayusculas[idxMayus];
                idxMayus++;
            }
            else if(idxNum < nnum)
            {
                matriz[i][j] = numeros[idxNum];
                idxNum++;
            }
        }
    }

    //Imprimir matriz 8x8
	imprimir(matriz);
	return 0;
}
