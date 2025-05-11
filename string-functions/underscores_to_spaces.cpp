/*
 * Author: Dominic Esguerra
 * Last update: May. 12, 2025
 * Description: Convert spaces to underscores
 */

#include <iostream>
#include <string>

std::string spaceToUnderscore(const std::string &s) {
  std::string result = "";
  for (char c : s) {
    if (c == ' ')
      result += '_';
    else
      result += c;
  }
  return result;
}

int main() {
  std::string originalWord = "I Love C++";
  std::cout << "Original word: " << originalWord
            << "\nNew Word: " << spaceToUnderscore(originalWord);
  return 0;
}