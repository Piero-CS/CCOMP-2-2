#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> num;
    int val1 = num / 1000;
    int val2 = (num % 1000) / 100;
    int val3 = (num - 1000*val1 - 100*val2) / 10;
    int val4 = num - 1000*val1 - 100*val2 - 10*val3;
    cout << val1 << endl;
    cout << val2 << endl;
    cout << val3 << endl;
    cout << val4 << endl;
    return 0;
}
