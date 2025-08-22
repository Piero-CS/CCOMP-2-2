#include <iostream>

using namespace std;

int main()
{
    double val1, val2, result;
    char op;
    cout << "Ingrese la operacion que desea (+, -, *, /): ";
    cin >> op;
    cout << "Ingrese el primer valor: ";
    cin >> val1;
    cout << "Ingrese el segundo valor: ";
    cin >> val2;
    switch(op){
        case '+':
            result = val1 + val2;
            break;
        case '-':
            result = val1 - val2;
            break;
        case '*':
            result = val1 * val2;
            break;
        case '/':
            result = val1 / val2;
            break;
    }

    cout << "El resultado de la operacion de " << val1 << " y " << val2 << " es de " << result << endl;
    return 0;
}
