/*
 * Author: Dominic Esguerra
 * Last update: May. 11, 2025
 * Description: Convert Minutes to Hours
 */

#include <iostream>
#include <limits>
#include <string>

std::string convert(float mins) {
  mins /= 60;
  return "Hours: " + std::to_string(mins);
}

int main() {
  float mins;
  std::cout << "Minutes: ";
  while (!(std::cin >> mins)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  std::cout << convert(mins);
  return 0;
}