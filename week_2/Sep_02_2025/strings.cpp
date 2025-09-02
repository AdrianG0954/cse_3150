#include <iostream>
#include <string.h>



int main() {
    // basic string input and output
    std::cout << "Enter your name: ";
    std::string input;
    std::cin >> input;
    std::cout << "Hello " << input << "!\n" << std::endl;

    // int conversion
    std::cout << "Enter Score: ";
    int score;
    std::cin >> score;
    std::cout << "Score is: " << score << "\n" << std::endl;

    // string concatenation
    std::cout << "Hello " + input + "! Your score is " + std::to_string(score) << std::endl;

    return 0;
}
