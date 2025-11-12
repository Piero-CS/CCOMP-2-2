#include "DynamicPointArray.h"

DynamicPointArray::DynamicPointArray()
{
    longitud = 0;
    data = new Point[longitud];
}

DynamicPointArray::DynamicPointArray(Point arr[], int size)
{
    longitud = size;
    data = new Point[longitud];
    for(int i{0}; i < longitud; i++)
    {
        data[i] = arr[i];
    }
}

DynamicPointArray::DynamicPointArray(DynamicPointArray &o)
{
    longitud = o.longitud;
    data = new Point[longitud];
    for(int i{0}; i < longitud; i++)
    {
        data[i] = o.data[i];
    }
}

void DynamicPointArray::print() const
{
    std::cout << "[ ";
    for(int i = 0; i < longitud; i++)
    {
        data[i].print();
    }
    std::cout << "]";
    std::cout << std::endl;
}

DynamicPointArray::~DynamicPointArray()
{
    //dtor
}
