#include <iostream>
#include <vector>
void displayArray(std::vector<int> &array) {
  std::cout << "Array: ";
  for (int i = 0; i < array.size(); ++i) {
    std::cout << array[i] << " ";
  }
  std::cout << '\n';
}

void bubbleSort(std::vector<int> &array) {
  int temp = 0;
  for (int i = 0; i < array.size() - 1; ++i) {
    for (int j = 0; j < array.size() - 1 - i; ++j) {
      if (array[j] > array[j + 1]) {
        std::swap(array[j], array[j + 1]);
      }
    }
  }
}

int main() {
  std::vector<int> array = {10, 1, 7, 3, 10, 1};
  displayArray(array);
  bubbleSort(array);
  displayArray(array);
  return 0;
}