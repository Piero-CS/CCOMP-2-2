#include <iostream>
#include <cmath>

class Punto
{
    private:
        int x;
        int y;
    public:
        Punto(){
            x = 0;
            y = 0;
        }

        Punto(int _x, int _y)
        {
            x = _x;
            y = _y;
        }

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        void print()
        {
            std::cout << "(" << x << ", " << y << ")";
        }

        void modificar(int _x, int _y)
        {
            x = _x;
            y = _y;
        }

};

class vectorGeometrico
{
    Punto ini;
    Punto fin;
    public:
        vectorGeometrico(Punto p1, Punto p2)
        {
            ini = p1;
            fin = p2;
        }

        void print()
        {
            ini.print();
            std::cout << " -> ";
            fin.print();
        }

        float modulo(){
            return sqrt(pow(fin.getX() - ini.getX(), 2) + pow(fin.getY() - ini.getY(), 2));
        }
};
int main()
{
    Punto p1;
    Punto p2(3, 4);
    vectorGeometrico vg(p1, p2);
    vg.print();
    std::cout << vg.modulo() << std::endl;
    return 0;
}
