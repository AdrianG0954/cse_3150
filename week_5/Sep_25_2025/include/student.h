#pragma once
#include <string>
#include <vector>

struct Student
{
    std::string name;
    double mt, final_;
    std::vector<double> homeworks;

    // moves the resources from other to this object
    Student(Student &&other) : name(std::move(other.name)),
                               mt(other.mt),
                               final_(other.final_),
                               homeworks(std::move(other.homeworks)) {}
};
