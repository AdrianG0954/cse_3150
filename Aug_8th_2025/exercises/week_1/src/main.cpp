#include <iostream>
#include "foo.h"
#include "bar.h"

int main() {
    int a = 5;
    int b = 6;

    if (CheckUtils::isEven(a)) {
        std::cout << a << " is even." << std::endl;
    } else {
        std::cout << a << " is odd." << std::endl;
    }

    std::cout << "Factorial of " << a << ": " << MathExtras::factorial(a) << std::endl;

    return 0;
}