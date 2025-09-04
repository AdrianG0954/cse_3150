#include <iostream>
#include <string>

void printGreeting(std::string fullName) {
    std::cout << "Length of the name " << fullName.size() << std::endl;

    size_t space_pos = fullName.find(' ');
    if (space_pos == std::string::npos) {
        std::cout << "Please provide both first and last names." << std::endl;
        return;
    } else {
        std::string firstName = fullName.substr(0, space_pos);
        std::string lastName = fullName.substr(space_pos + 1);
        std::cout << lastName << ", " << firstName << std::endl;
    }

    std::string greeting = "Hello " + fullName + "!";
    std::cout << greeting << std::endl;
}

int main() {
    std::string name;
    std::cout << "Enter your full name (first and last) ";
    std::getline(std::cin, name);
    printGreeting(name);
    return 0;
}