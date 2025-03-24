#include <iostream>
#include <string>

int main() {
  int star = 1, rows = 4;
  int space = rows - 1;
  for (int x = 0; x < rows; x++) {
    for (int y = 0; y < space; y++) {
      std::cout << " ";
    }
    space--;
    for (int z = 0; z < star; z++) {
      std::cout << "*";
    }
    star += 2;
    std::cout << std::endl;
  }
  return 0;
}
