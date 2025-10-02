#include <memory>
#include <ostream>
#include "Point.h"

class Rectangle
{
private:
    // std::shared_ptr<Point> corner;
    Point corner;
    double width;
    double height;

public:
    Rectangle() : corner(Point()), width(0), height(0) {}
    Rectangle(double x, double y, double height, double width)
    {
        this->corner = Point(x, y);
        this->height = height;
        this->width = width;
    }

    Point getCorner() const
    {
        return this->corner;
    }

    double getWidth() const
    {
        return this->width;
    }

    double getHeight() const
    {
        return this->height;
    }

    friend std::ostream &operator<<(std::ostream &os, const Rectangle &r)
    {
        return os << "rect(" << r.getCorner() << ", " << r.width << ", " << r.height << ")";
    }
};