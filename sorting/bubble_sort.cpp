#include <iostream>
int main() {
  int array[] = {99, 87, 2, 4, 7, 98, 5};
  int arrayLength = sizeof(array) / sizeof(array[0]);
  std::cout << "Unsorted Array: ";
  for (int i = 0; i < arrayLength; i++) {
    std::cout << array[i] << " ";
  }

  for (int i = 0; i < arrayLength; i++) {
    for (int j = 0; j < arrayLength - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  std::cout << "\nSorted Array: ";
  for (int i = 0; i < arrayLength; i++) {
    std::cout << array[i] << " ";
  }
  return 0;
}
