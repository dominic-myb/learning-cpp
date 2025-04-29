#include <iostream>
#include <string>

std::string reverseString(const std::string &s) {
  std::string reverseString = "";
  for (int i = s.length() - 1; i >= 0; i--) {
    reverseString += s[i];
  }
  return reverseString;
}

int main() {
  std::string word = "LanternCrispMeadowWhistleBreeze";
  std::cout << "String: " << word;
  std::cout << "\nReverse String: " << reverseString(word);
  return 0;
}