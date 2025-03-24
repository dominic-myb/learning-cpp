#include <iostream>
#include <string>

std::string convert(int hours) {
  return "in Seconds: " + std::to_string(hours * 60 * 60);
}

int main() {
  std::cout << convert(20);
  return 0;
}