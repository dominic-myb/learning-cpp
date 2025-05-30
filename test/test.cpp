#include <iostream>
using namespace std;

void displayChars(int &n) {
  for (int i = 0; i < n; i++) {
    cout << "*";
  }
}

int main() {
  cout << "How many rows?: ";
  int rows = 0;
  cin >> rows;
  displayChars(rows);
  return 0;
}