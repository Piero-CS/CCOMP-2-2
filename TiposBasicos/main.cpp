#include <iostream>

using namespace std;

int main()
{
    //Conversion de Char a Int sin castear
    char val;
    cout << "Ingrese un caracter: ";
    cin >> val;
    cout << "El caracter ingresado es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "El valor numero es: " << num << endl;

    //Mayuscula o no
    char car;
    cout << "Ingrese un caracter: ";
    cin >> car;
    int num2 = static_cast<int>(car);
    if (num2 >= 65 && num2 <= 90)
    {
        cout << "El caracter ingresado es una mayuscula" << endl;
    }
    else if (num2 >= 97 && num2 <= 122)
    {
        cout << "El caracter ingresado es una minuscula" << endl;
    }
    else if (num2 >= 48 && num2 <= 57)
    {
        cout << "El caracter ingresado es un numero" << endl;
    }
    else
    {
        cout << "El caracter ingresado no es del abecedario" << endl;
    }




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





