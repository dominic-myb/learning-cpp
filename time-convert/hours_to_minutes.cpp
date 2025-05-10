/*
 * Author: Dominic Esguerra
 * Last update: May. 11, 2025
 * Description: Convert Hours to Minutes
 */

#include <iostream>
#include <limits>
#include <string>

std::string convert(float hours) {
  return "Minutes: " + std::to_string(hours * 60);
}

int main() {
  float hours;
  std::cout << "Hours: ";
  while (!(std::cin >> hours)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  std::cout << convert(hours);
  return 0;
}