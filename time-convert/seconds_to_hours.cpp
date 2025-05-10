/*
 * Author: Dominic Esguerra
 * Last update: May. 11, 2025
 * Description: Convert Seconds to Hours
 */

#include <iostream>
#include <limits>
#include <string>

std::string convert(float secs) {
  return "in Hours: " + std::to_string(secs / 60 / 60);
}

int main() {
  float secs;
  std::cout << "Seconds: ";
  while (!(std::cin >> secs)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  std::cout << convert(secs);
  return 0;
}