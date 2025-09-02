#include "mathExtras.h"
#include "checkUtils.h"
#include <iostream>

int main() {
    int a = 5;
    int b = 6;

    if (CheckUtils::isEven(a)) {
        std::cout << a << " is even." << std::endl;
    } else {
        std::cout << a << " is odd." << std::endl;
    }

    std::cout << "Factorial of " << b << " is " << MathExtras::factorial(b) << std::endl;

    return 0;
}