#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

class Vehicle
{
    public:
        Vehicle();
        Vehicle(const std::string &myLicense, const int myYear): license(myLicense),year(myYear){}
        const std::string &getLicense() const {return license;}
        const int getYear() const {return year;}

        virtual ~Vehicle();

    protected:
        std::string license;
        int year;
};

#endif // VEHICLE_H
