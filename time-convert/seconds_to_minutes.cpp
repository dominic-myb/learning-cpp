/*
 * Author: Dominic Esguerra
 * Last update: May. 11, 2025
 * Description: Convert Seconds to Minutes
 */

#include <iostream>
#include <limits>
#include <string>

std::string convert(float secs) {
  secs /= 60;
  return "Minutes: " + std::to_string(secs);
}

int main() {
  float secs;
  std::cout << "Seconds: ";
  while (!(std::cin >> secs)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }
  std::cout << convert(secs);
  return 0;
}