/*
 * Author: Dominic Esguerra
 * Last update: May. 11, 2025
 * Description: Convert Minutes to Seconds
 */

#include <iostream>
#include <limits>
#include <string>

std::string convert(int minutes) {
  return "In Seconds: " + std::to_string(minutes * 60);
}

int main() {
  int mins;
  std::cout << "Minutes: ";
  while (!(std::cin >> mins)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }
  std::cout << convert(mins);
  return 0;
}