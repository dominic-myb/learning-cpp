#include <iostream>

int main() {
  int array[] = {2, 4, 5, 7, 87, 98, 99};
  int arrayLen = sizeof(array) / sizeof(array[0]);
  int target = 1;
  int tarPos = 0;
  int low = 0;
  int up = arrayLen - 1;
  int mid = 0;
  bool isFound = false;

  while (low <= up) {
    mid = (low + up) / 2;
    if (array[mid] == target) {
      tarPos = mid;
      isFound = true;
      break;
    } else {
      if (array[mid] < target) {
        low = mid + 1;
      } else {
        up = mid - 1;
      }
    }
  }

  if (isFound) {
    std::cout << "Target found in element " << tarPos << " !";
  } else {
    std::cout << "Target not found!";
  }
  return 0;
}
