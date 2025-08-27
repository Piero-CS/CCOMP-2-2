#include <iostream>

using namespace std;

int main()
{
    //Conversion de Char a Int sin castear
    char car = '6';
    int num = car - '0';
    cout << "El valor entero es: " << num << std::endl;

    //Calculadora
    double val1, val2, result;
    char op;
    cout << "Ingrese la operacion que desea (+, -, *, /): ";
    cin >> op;
    if (op != '+' && op != '-' && op != '*' && op != '/')
    {
        cout << "Operacion invalida";
        return 0;
    }
    else
    {
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
}

/**
Tipos de Datos

Para ENTEROS:
    - short (2 bytes)
    - int - long (4 bytes)
    - long long (8 bytes)
    - unsigned (solo positivos)

Para DECIMALES:
    - float (4 bytes)
    - double (8 bytes)
    - long double (16 bytes)

Para OTROS:
    - char (1 byte)
    - bool (1 byte)
 */

 /**
 Conversion de tipo
 char car = 'A';
 int val = static_cast<int>(car);
 std::cout << val;
 */





