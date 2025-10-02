#include "Point.h"
#include <ostream>

Point operator+(const Point &p1, const Point &p2)
{
    return Point(p1.x + p2.x, p1.y + p2.y);
}

Point operator*(const Point &p1, double s)
{
    return Point(p1.x * s, p1.y * s);
}

std::ostream &operator<<(std::ostream &os, const Point &p)
{
    return os << "(x: " << p.x << ", y: " << p.y << ")" << std::endl;
}