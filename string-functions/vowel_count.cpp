#include <cctype>
#include <iostream>
#include <string>

bool isVowel(const char &c) {
  return (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
          tolower(c) == 'o' || tolower(c) == 'u');
}

int vowelCount(const std::string &word) {
  int res = 0;
  for (char c : word) {
    if (isVowel(c)) {
      res++;
    }
  }
  return res;
}

int main() {
  std::string word = "LanternCrispMeadowWhistleBreeze";
  std::cout << "Word: " << word << "\nNumber of Vowels: " << vowelCount(word);
  return 0;
}