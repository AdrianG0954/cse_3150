#pragma once
#include <ostream>

class Point
{
private:
    double x;
    double y;

public:
    Point()
    {
        x = y = 0;
    }

    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    // copy constructor
    Point(const Point &p) : x(p.getX()), y(p.getY()) {}

    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    void setX(double newX)
    {
        this->x = newX;
    }

    void setY(double newY)
    {
        this->y = newY;
    }

    Point &operator=(const Point &p)
    {
        if (this != &p)
        {
            x = p.getX();
            y = p.getY();
        }
        return *this;
    }

    friend Point operator+(const Point &p1, const Point &p2);
    friend Point operator*(const Point &p1, const double s);
    friend std::ostream &operator<<(std::ostream &os, const Point &p);
};