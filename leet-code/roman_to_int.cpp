#include <iostream>
#include <map>
#include <string>

class Solution {
public:
  int romanToInt(std::string s) {
    // initialize symbol values
    std::map<char, int> symbols = {{'I', 1},   {'V', 5},   {'X', 10},
                                   {'L', 50},  {'C', 100}, {'D', 500},
                                   {'M', 1000}};
    int result = 0;
    int n = s.length();
    // traverse s
    for (int i = 0; i < n; i++) {
      // this if prevents out of bounds on / i < n - 1 /
      // then checks if / i symbol value less than i+1 symbol value /
      // like in roman numeral 4 / IV / I = 1 V = 5
      // 0 - 1 = -1 and will be stored to result
      // in else 5 will be added to result so final value of result is 4
      if (symbols[s[i]] < symbols[s[i + 1]]) {
        result -= symbols[s[i]];
      } else {
        result += symbols[s[i]];
      }
    }
    return result;
  }
};

int main() {
  Solution s;
  std::cout << s.romanToInt("IV");
  return 0;
}