#include <cmath>
#include <iostream>
#include <string>

float finalPrice(const std::string &price) {
  const float DISCOUNT = 0.10;
  const float original = stof(price);
  float res = original - (original * DISCOUNT);
  return (std::round(res * 100) / 100);
}

int main() {
  std::string price = "199.99";
  std::cout << "Final price: " << finalPrice(price);
  return 0;
}