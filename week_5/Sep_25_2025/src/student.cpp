#include <memory>
#include <iostream>
#include <vector>
#include "student.h"

void Student::read(std::istream &is)
{
    is >> name >> mt >> final_;
    double hw;
    while (is >> hw)
    {
        homeworks.push_back(hw);
    }
}

void Student::print(std::ostream &os) const
{
    os << "Name: " << name << "\n";
    os << "Midterm: " << mt << "\n";
    os << "Final: " << final_ << "\n";
    os << "Homeworks: ";
    for (const auto &hw : homeworks)
    {
        os << hw << " ";
    }
    os << "\n";
}

void Student::setName(const std::string &n)
{
    Student::name = n;
}

int main()
{
    Student s;
    std::shared_ptr<Student> sp = std::make_shared<Student>();
    *sp = s; // copies s into the heap

    return 0;
}