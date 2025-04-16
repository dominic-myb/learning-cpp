#include <iostream>
using namespace std;

int main() {
  string word = "";
  string reverseWord = "";
  cout << "Enter a word: ";
  while (!(getline(cin, word))) {
    cin.clear();
    cin.ignore(1000, '\n');
  }

  for (int i = word.length() - 1; i >= 0; i--) {
    reverseWord += word[i];
  }

  cout << word << " is ";

  if (reverseWord == word) {
    cout << "a palindrome";
  } else {
    cout << "not a palindrome";
  }

  return 0;
}
