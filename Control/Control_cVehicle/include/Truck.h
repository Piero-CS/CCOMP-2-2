#ifndef TRUCK_H
#define TRUCK_H
#include <Vehicle.h>

class Truck : public Vehicle
{
    public:
        Truck(const std::string &myLicense, const int myYear, int k, int p): license(myLicense),year(myYear), km(k), peso(p){}
        int getKm() const {return km;}
        int getPeso() const {return peso;}
        virtual ~Truck();

    private:
        int km;
        int peso;

};

#endif // TRUCK_H
