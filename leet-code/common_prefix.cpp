#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs) {
    std::string res = "";

    for (int j = 0, ctr = 0; j < strs[0].length(); j++) {
      char target = strs[0][j];
      for (int i = 1; i < strs.size(); i++) {
        if (strs[i][j] == target) {
          ctr++;
        } else {
          return res;
        }
      }
      if (ctr == strs.size() - 1) {
        res += target;
        ctr = 0;
      }
    }
    return res;
  }
};

int main() {
  Solution s;
  std::vector<std::string> s1 = {"flower", "flow", "flight"};
  std::cout << s.longestCommonPrefix(s1);
  return 0;
}