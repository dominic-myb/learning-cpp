/*
 * Author: Dominic Esguerra
 * Last update: May. 12, 2025
 * Description: Outputs character frequency in a string
 */

#include <cctype>
#include <iostream>
#include <string>

int charFrequency(const std::string &s, char target) {
  int res = 0;
  for (char c : s) {
    if (tolower(c) == tolower(target))
      res++;
  }
  return res;
}

int main() {
  std::string word = "hello world";
  char target = 'o';
  std::cout << "Word: " << word;
  std::cout << "\nCharacter: " << target;
  std::cout << "\nCharacter frequency: " << charFrequency(word, target);
  return 0;
}