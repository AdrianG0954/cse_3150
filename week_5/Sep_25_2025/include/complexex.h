#pragma once
#include <iostream>

class Complex
{
private:
    double real;
    double imag;

    // we need to add const to tell the compiler
    // nothing will change
    Complex add(const Complex &c2) const
    {
        return Complex(real + c2.real, imag + c2.imag);
    }

    void print(std::ostream &os) const
    {
        os << "(real: " << real << ", imag: " << imag
           << ")"
           << std::endl;
    }

public:
    Complex() : real(0), imag(0) {};

    Complex(double real_, double imag_) : real(real_), imag(imag_) {};

    Complex(const Complex &a) : real(a.real), imag(a.imag) {}

    Complex &operator=(const Complex &a)
    {
        if (this != &a)
        {
            real = a.real;
            imag = a.imag;
        }
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &c)
    {
        c.print(os);
        return os;
    }
    // friend allows the function to access private variables
    friend Complex operator+(const Complex &a, const Complex &b)
    {
        return a.add(b);
    }
};