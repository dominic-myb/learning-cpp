#include <iostream>

int convert(int minutes) { return minutes * 60; }

int main() {
  std::cout << convert(2);
  return 0;
}