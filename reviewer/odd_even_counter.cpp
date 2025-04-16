#include <iostream>
using namespace std;
int main() {
	int arr[5] = {1, -2, 3, 4, 5};
	int len = sizeof(arr) / sizeof(arr[0]);
	int odd = 0;
	int even = 0;
	for(int i=0; i<len; i++){
		if (arr[i] % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	return 0;
}
