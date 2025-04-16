#include <iostream>
using namespace std;
int main() {
	int year = 0;
	cout << "Enter a year: ";
	while(!(cin >> year)){
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		cout << year << " is a leap year.";
	} else {
		cout << year << " is not a leap year.";
	}
	return 0;
}
