#ifndef DYNAMICPOINTARRAY_H
#define DYNAMICPOINTARRAY_H
#include "Point.h"

class DynamicPointArray
{
    public:
        DynamicPointArray();
        DynamicPointArray(Point arr[], int size);
        DynamicPointArray(DynamicPointArray &o);
        void print() const;
        void push_back(Point val);
        void insert(Point val, int pos);
        void remove(int pos);
        ~DynamicPointArray();
    private:
        Point* data;
        int longitud;

};

#endif // DYNAMICPOINTARRAY_H
