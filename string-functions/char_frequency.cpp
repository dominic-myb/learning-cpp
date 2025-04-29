#include <cctype>
#include <iostream>
#include <string>

int charFrequency(const std::string &s, char target) {
  int res = 0;
  for (char c : s) {
    if (tolower(c) == tolower(target)) {
      res++;
    }
  }
  return res;
}

int main() {
  std::string word = "banAna";
  char target = 'a';
  std::cout << "Word: " << word;
  std::cout << "\nCharacter: " << target;
  std::cout << "\nCharacter frequency: " << charFrequency(word, target);
  return 0;
}