#include <iostream>
#include <stack>
#include <vector>

void vector_test() {
    std::vector<int> test;
    for (int i = 0; i < 10; ++i) {
        test.push_back(i);
    }

    for (int x : test) {
        std::cout << "i: " << x << std::endl;
    }
}

int main()
{
    std::stack<int> whoa;
    for (int i = 0; i < 5; ++i)
    {
        whoa.push(i);
    }

    while (!whoa.empty())
    {
        std::cout << "curr element: " << whoa.top() << std::endl;
        whoa.pop();
    }

    return 0;
}