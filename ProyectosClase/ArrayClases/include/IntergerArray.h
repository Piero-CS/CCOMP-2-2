#ifndef INTERGERARRAY_H
#define INTERGERARRAY_H
#include <iostream>

class IntergerArray
{
    public:
        IntergerArray(int size);
        void setData(int val, int idx);
        void print() const;
        int getData(int idx) const;
        ~IntergerArray();

    private:
        int size;
        int *data;
};

#endif // INTERGERARRAY_H
