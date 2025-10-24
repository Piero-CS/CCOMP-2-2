#include <iostream>
#include <cmath>

class Punto
{
    public:
        double x{0}, y{0};

        void print()
        {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

        void modificar(int _x, int _y)
        {
            x = _x;
            y = _y;
        }

};

float distancia(float p1_x, float p1_y, float p2_x, float p2_y)
{
    return sqrt(pow(p2_x - p1_x, 2) + pow(p2_y - p1_y, 2));
}
int main()
{
    Punto p1;
    p1.x = 0;
    p1.y = 0;
    Punto p2;
    p2.x = 3;
    p2.y = 4;

    float distancia_1 = distancia(p1.x, p1.y, p2.x, p2.y);
    std::cout << distancia_1 << std::endl;
    p1.print();
    p2.print();

    p2.modificar(5, 5);
    float distancia_2 = distancia(p1.x, p1.y, p2.x, p2.y);
    std::cout << distancia_2 << std::endl;
    p1.print();
    p2.print();
    return 0;
}


