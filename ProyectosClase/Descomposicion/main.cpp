#include <iostream>

//using namespace std;

int main()
{
    int num{0};
    std::cout << "Ingrese un numero de 4 digitos: ";
    std::cin >> num;
    std::cout << num /1000 << std::endl;
    std::cout << (num % 1000) / 100 << std::endl;
    std::cout << (num % 100) / 10 << std::endl;
    std::cout << (num % 10) << std::endl;



    return 0;
}
