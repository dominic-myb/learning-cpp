#include <iostream>
#include <string>

std::string ageCategory(const std::string &age) {
  int a = stoi(age);
  if (a <= 12) {
    return "Child";
  } else if (a <= 19) {
    return "Teen";
  } else if (a <= 64) {
    return "Adult";
  } else {
    return "Senior";
  }
}

int main() {
  std::string age = "";
  std::cout << "Enter Age: ";
  std::getline(std::cin, age);
  std::cout << ageCategory(age);
  return 0;
}