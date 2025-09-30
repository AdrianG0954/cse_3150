#pragma once
#include <string>
#include <vector>
#include <iostream>

class AStudent
{
public:
    virtual void read(std::istream &is) = 0;
    // const as we are not modifying the object
    virtual void print(std::ostream &os) const = 0;
    virtual void setName(const std::string &n) = 0;
};

class Student : public AStudent
{
private:
    // any private members
    std::string name;
    double mt, final_;
    std::vector<double> homeworks;

public:
    // default constructor
    Student() { mt = final_ = 0.0; }

    // regular constructor
    Student(const std::string &s) : name(s), mt(0), final_(0) {}

    // copy constructor
    // Student s2 = s1;
    Student(const Student &other)
    {
        name = other.name;
        mt = other.mt;
        final_ = other.final_;
        homeworks = other.homeworks;
    }

    // moves the resources from other to this object
    // move constructor
    // Student s2 = std::move(s1);
    Student(Student &&other) : name(std::move(other.name)),
                               mt(other.mt),
                               final_(other.final_),
                               homeworks(std::move(other.homeworks)) {}

    // assignment operator
    // s1 = s2;
    Student &operator=(const Student &other)
    {
        if (this != &other)
        {
            name = other.name;
            mt = other.mt;
            final_ = other.final_;
            homeworks = other.homeworks;
        }
        return *this;
    }

    // move assignment operator
    // s1 = std::move(s2);
    Student &operator=(Student &&other)
    {
        // use move only for dynamic resources
        if (this != &other)
        {
            name = std::move(other.name);
            mt = other.mt;
            final_ = other.final_;
            homeworks = std::move(other.homeworks);
        }
        return *this;
    }

    ~Student()
    {
        std::cout << "Destroy " << this << std::endl;
    }

    // specify we are overriding the base class methods
    void read(std::istream &is) override;
    void print(std::ostream &os) const override;
    void setName(const std::string &n) override;
};
