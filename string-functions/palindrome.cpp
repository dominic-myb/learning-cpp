#include <cctype>
#include <iostream>
#include <string>

std::string convertToLower(const std::string &s){
  std::string res = "";
  for(const char c: s){
    res += tolower(c);
  }
  return res;
}

std::string reverseString(const std::string &s) {
  std::string reverseString = "";
  for (int i = s.length() - 1; i >= 0; i--) {
    reverseString += s[i];
  }
  return reverseString;
}

bool isPalindrome(std::string s) {
  s = convertToLower(s);
  std::string rev = reverseString(s);
  return rev == s;
}

int main() {
  std::string word = "I love C++";
  std::cout << word << " " << (isPalindrome(word) ? "is a Palindrome" : "is not a Palindrome");
  return 0;
}