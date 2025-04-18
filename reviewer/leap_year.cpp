#include <iostream>
using namespace std;
bool isLeapYear(int n){
	return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
}
int main() {
	int year;
	cout << "Enter year: ";
	while(!(cin >> year)){
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if(isLeapYear(year)){
		cout << year << " is a leap year.";
	} 
	else {
		cout << year << " is not a leap year.";
	}
	return 0;
} 
