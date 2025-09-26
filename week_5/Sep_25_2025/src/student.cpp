#include <memory>
#include <iostream>
#include <vector>
#include "student.h"

int main()
{
    Student s;
    std::shared_ptr<Student> sp = std::make_shared<Student>();
    s.name = "John";
    s.mt = 80;
    s.final_ = 90;
    s.homeworks.push_back(90);
    s.homeworks.push_back(100);

    *sp = s; // copies s into the heap
    return 0;
}