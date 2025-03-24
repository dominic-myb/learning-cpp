#include <iostream>
using namespace std;

int main() {
  int arr[] = {3, 5, 1, 2};
  for (int i = 0; i < sizeof(arr[0]); i++) {
    for (int j = 0; j < sizeof(arr[0]) - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // use pointers
      }
    }
  }
  return 0;
}
