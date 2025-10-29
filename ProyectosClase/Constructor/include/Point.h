#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
    public:
        Point();
        Point(int x_, int y_);
        void print() const;
        ~Point();
    private:
        int x, y;
};

#endif // POINT_H
