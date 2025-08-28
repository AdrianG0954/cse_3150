#include <iostream>

namespace CSE3150 {
    int foo(int n) {
        return n + 1;
    }
}

int main() {
    std::cout << "Hello, World" << " " << CSE3150::foo(10) << std::endl;
    return 0;
}