#include "DynamicIntegerArray.h"

DynamicIntegerArray::DynamicIntegerArray()
{
    longitud = 0;
    data = new int[longitud];
}

DynamicIntegerArray::DynamicIntegerArray(int arr[], int size)
{
    longitud = size;
    data = new int[longitud];
    for(int i{0}; i < longitud; i++)
    {
        data[i] = arr[i];
    }
}

int DynamicIntegerArray::getSize() const
{
    return longitud;
}

void DynamicIntegerArray::push_back(int val)
{
    int *tmp = new int[longitud + 1];
    for(int i{0};i < longitud; i++)
    {
        tmp[i] = data[i];
    }
    tmp[longitud] = val;
    longitud ++;
    delete[] data;
    data = tmp;
}

void DynamicIntegerArray::insert(int val, int pos)
{
    int *tmp = new int[longitud + 1];
    for(int i{0}; i < pos; i++)
    {
        tmp[i] = data[i]
    }
    for(int i = pos; i < longitud; i++)
    {
        tmp[i+1] = data[i]
    }
    tmp[pos] = val;
    longitud++;
    delete[] data;
    data = tmp;
}

void DynamicIntegerArray::remove(int pos)
{
    int *tmp = new int[longitud-1];
    for(int i = 0; i < pos; i++)
    {
        tmp[i] = data[i]
    }
}

void DynamicIntegerArray::print() const
{
    std::cout << "[ ";
    for(int i = 0; i < longitud; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
}
DynamicIntegerArray::~DynamicIntegerArray()
{
    delete data;
}
