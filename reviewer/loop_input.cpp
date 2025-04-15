#include <iostream>
#include <limits>
using namespace std;
int main(){
	int n = 0;
	
	cout << "Enter: ";
	cin >> n;
	
	if(n > 5){
		cout << "Input must not greater than 5";
		return 0;
	}
	
	float marks[n];
	float sum = 0;
	float average = 0;
	
	for(int i=0; i<n; i++){
		cout << "Enter #" << i+1 <<": ";
		if(!(cin >> marks[i])){
			cin.clear();
			cin.ignore(123, '\n');
			i--;
		}
		sum += marks[i];
	}
	average = sum / n;
	cout << "Average: " << average << endl;
}
