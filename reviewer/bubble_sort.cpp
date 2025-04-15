#include <iostream>
using namespace std;
void printArr(int arr[], int length) {
	for(int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout<<endl;
}

int main() {
	int arr[5] = {10, 2, 3, 6, 3};
	int arrLen = sizeof(arr) / sizeof(arr[0]);
	
	printArr(arr, arrLen);
	
	for (int i = 0; i < arrLen; i++) {
		for(int j = 0; j < arrLen - 1 - i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printArr(arr, arrLen);
	return 0;
}
