#include <iostream>
#include <string>
int main() {
    std::string name;
    std::cout << "hello-world." << std::endl;
    std::cout << "Enter your Name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "." << std::endl;
    return 0;
}
