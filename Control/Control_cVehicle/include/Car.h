#ifndef CAR_H
#define CAR_H
#include <Vehicle.h>

class Car : public Vehicle
{
    public:
        Car(const std::string &myLicense, const int myYear, int vel, int per): license(myLicense),year(myYear), velocidad(vel), max_personas(per);
        virtual ~Car();
        int getVelocidad() const {return velocidad;}
        int getPersonas() const {return max_personas;}

    private:
        int velocidad;
        int max_personas;
};

#endif // CAR_H
