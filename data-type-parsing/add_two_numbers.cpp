#include <iostream>
#include <string>

int stringToInt(const std::string& num1, const std::string& num2){
  return stoi(num1) + stoi(num2);
}

int main(){
  std::string num1 = "123";
  std::string num2 = "456";
  int res = stringToInt(num1, num2);
  std::cout << num1 << " + " << num2 << " = " << res;
  return 0;
}