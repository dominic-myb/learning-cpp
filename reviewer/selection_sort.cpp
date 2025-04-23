#include <iostream>
#include <vector>

void displayVector(std::vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << '\n';
}

void selectionSort(std::vector<int> &arr) {
  int n = arr.size(); // store the vector size/length

  // n - 1 because we initialize minIdx to 0 from size 7 to 6 cause we are using
  // index 0 in the next for loop we need to add 1 to access the next element
  // first so in first loop checks [1] < [0]
  for (int i = 0; i < n - 1; ++i) {
    // initialize 0 as the lowest index
    int minIdx = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    std::swap(arr[i], arr[minIdx]);
  }
}

int main() {
  std::vector<int> v = {2, 8, 5, 3, 9, 4, 1};
  displayVector(v);
  selectionSort(v);
  displayVector(v);
  return 0;
}