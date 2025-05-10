/*
 * Author: Dominic Esguerra
 * Last update: May. 11, 2025
 * Description: Convert Hours to Seconds
 */

#include <iostream>
#include <limits>
#include <string>

std::string convert(int hours) {
  return "in Seconds: " + std::to_string(hours * 60 * 60);
}

int main() {
  int hours;
  std::cout << "Hours: ";
  while (!(std::cin >> hours)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }
  std::cout << convert(hours);
  return 0;
}