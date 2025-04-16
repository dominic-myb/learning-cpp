#include <iostream>
using namespace std;

int main() {
	float arr[5];
	float average = 0;
	string subjects[5] = {"Math", "Science", "Filipino", "PE", "History"};
	char rating;
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		cout << "Input Grade in " << subjects[i] <<": ";
		if(!(cin >> arr[i])){
			cin.clear();
			cin.ignore(1000, '\n');
			i--;
		}
		else {
			average += arr[i];
		}
	}
	average /= 5;
	if (average >= 90){
		rating = 'A';
	} else if (average >= 80) {
		rating = 'B';
	} else if (average >= 70) {
		rating = 'C';
	} else if (average >= 60){
		rating = 'D';
	} else {
		rating = 'F';
	}
	
	cout << "Average is: " << average << endl;
	cout << "Your rating is: " << rating;
	return 0;
}
