#include <iostream>
#include <string>

std::string spaceToUnderscore(const std::string &s) {
  std::string res = "";
  for (char c : s) {
    if (c == ' ') {
      res += '_';
    } else {
      res += c;
    }
  }
  return res;
}

int main() {
  std::string originalWord = "I Love C++";
  std::cout << "Original word: " << originalWord
            << "\nNew Word: " << spaceToUnderscore(originalWord);
  return 0;
}