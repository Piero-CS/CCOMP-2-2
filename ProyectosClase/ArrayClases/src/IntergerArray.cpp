#include "IntergerArray.h"

IntergerArray::IntergerArray(int size)
{
    this -> size = size;
    this -> data = new int[size];
}

void IntergerArray::setData(int val, int idx)
{
    if(idx <= 0 || idx < size)
    {
        this -> data[idx] = val;
    }
}

void IntergerArray::print() const
{
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
    {
        std::cout << this -> data[i] << " ";
    }
    std::cout << "]";
}

int IntergerArray::getData(int idx) const
{
    if(idx <= 0 || idx < size)
    {
        return this -> data[idx];
    }
}
IntergerArray::~IntergerArray()
{
    delete[] data;
}
