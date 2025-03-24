#include <iostream>
#include <string>

std::string convert(int secs) {
  int rem = secs % 60;
  secs /= 60;
  return "Minutes: " + std::to_string(secs) + ":" + std::to_string(rem);
}

int main() {
  std::cout << convert(70);
  return 0;
}