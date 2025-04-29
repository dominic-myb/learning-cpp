#include <iostream>
#include <string>

bool stringToBool(const std::string &b) {
  return (b == "True" || b == "true" || b == "1");
}

int main() {
  std::string decision = "True";
  std::cout << "The decision is "
            << (stringToBool(decision) ? "True" : "False");
  return 0;
}