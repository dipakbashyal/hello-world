#include <iostream>
#include <string>

int main() {
  // Var initialization
  std::string userInput;

  std::cout << "Hello world!" << std::endl;
  std::cout << "What is your name?" << std::endl;
  std::getline(std::cin, userInput);
  std::cout << "Hello " << userInput << "!" << std::endl;
  
  return 0;
}
