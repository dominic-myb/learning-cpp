#include <iostream>
#include <string>

std::string convert(int secs) {
  return "in Hours: " + std::to_string(secs / 60 / 60);
}

int main() {
  std::cout << convert(3600);
  return 0;
}