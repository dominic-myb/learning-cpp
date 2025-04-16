#include <iostream>
using namespace std;

int fib(int n) {
  if (n < 2) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int num = 0;
  cout << "Enter a number: ";
  while (!(cin >> num)) {
    cin.clear();
    cin.ignore(1000, '\n');
  }
	
  cout << "Fibonacci Sequence: ";
  for (int i = 0; i < num + 1; i++) {
    cout << fib(i) << " ";
  }
  return 0;
}
