#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<string> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void loadInputs(vector<string> &arr) {
  ifstream file("even+odd.txt");
  if (!file) {
    cerr << "\nNo file found.";
    return;
  }
  string s1 = "", s2 = "";
  while (file >> s1 >> s2) {
    arr.push_back(s1);
    arr.push_back(s2);
  }
}

// string evenPlusOdd(vector<string> &arr) {
//   string res = "";
// 	vector<string> _arr;
//   for (int i = 0; i < arr.size() - 1; i++) {
//     string target = arr[i];

//   }
// }

int main() {
  vector<string> arr;
  loadInputs(arr);
  printArray(arr);
  return 0;
}
