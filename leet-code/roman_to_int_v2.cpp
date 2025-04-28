#include <iostream>
#include <string>
class Solution {
public:
  int romanConverter(char &c) {
    switch (c) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    default:
      return -1;
    }
  }
  int romanToInt(std::string s) {
    int n = s.length();
    int result = 0;
    for (int i = 0; i < n; i++) {
      int c1 = romanConverter(s[i]);
      int c2 = romanConverter(s[i + 1]);
      if (c1 < c2) {
        result -= c1;
      } else {
        result += c1;
      }
    }
    return result;
  }
};
int main() {
  Solution s;
  std::cout << s.romanToInt("III");
  return 0;
}