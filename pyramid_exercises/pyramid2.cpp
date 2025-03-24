#include <iostream>
#include <string>

int main() {
  int triangleSize = 10;
  for (int x = 1; x <= triangleSize; x++) {
    for (int y = triangleSize - x; y < triangleSize; y++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}