/*
 * Author: Dominic Esguerra
 * Last update: May. 12, 2025
 * Description: Reverses a String
 */

#include <iostream>
#include <string>

std::string reverseString(const std::string &s) {
  std::string result = "";
  for (int i = s.length() - 1; i >= 0; i--) {
    result += s[i];
  }
  return result;
}

int main() {
  std::string word = "LanternCrispMeadowWhistleBreeze";
  std::cout << "String: " << word;
  std::cout << "\nReverse String: " << reverseString(word);
  return 0;
}