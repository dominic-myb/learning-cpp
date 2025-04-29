#include <iostream>
#include <string>

std::string isEven(const std::string &num) {
  return (stoi(num) % 2 == 0 ? "Even" : "Odd");
}

int main() {
  std::string num = "21";
  std::cout << isEven(num);
  return 0;
}