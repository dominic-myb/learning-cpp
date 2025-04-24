#include <iostream>
#include <map>
#include <vector>
class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::map<int, int> prevTarget;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      int num = nums[i];
      if (prevTarget.find(target - num) != prevTarget.end()) {
        return std::vector<int>{prevTarget.at(target - num), i};
      }
      prevTarget.insert({num, i});
    }
    return std::vector<int>{};
  }

  void displayVector(std::vector<int> &arr) {
    int n = arr.size();
    std::cout << "[ ";
    for (int i = 0; i < n; i++) {
      std::cout << arr[i] << (i < n - 1 ? ", " : " ");
    }
    std::cout << "]\n";
  }
};
int main() {
  Solution solution;
  
  std::vector<int> v1 = {2, 7, 11, 15};
  std::vector<int> v2 = {3, 2, 4};
  std::vector<int> v3 = {3, 3};
  std::vector<int> v4 = {0, 4, 3, 0};

  auto o1 = solution.twoSum(v1, 9);
  auto o2 = solution.twoSum(v2, 6);
  auto o3 = solution.twoSum(v3, 6);
  auto o4 = solution.twoSum(v4, 0);

  solution.displayVector(o1);
  solution.displayVector(o2);
  solution.displayVector(o3);
  solution.displayVector(o4);

  return 0;
}