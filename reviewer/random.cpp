#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void chooseDifficulty() {
	cout << "[1] - Easy\n";
	cout << "[2] - Normal\n";
	cout << "[3] - Hard\n";
	cout << "Select Difficulty: ";
}
int main() {
	srand(time(0));
	int opt = 0;
	int lives;
	int guess = 0;
	int numberOfGuesses = 0;
	int target = (rand() % 101) + 1;
	do {
		chooseDifficulty();
	}while (!(cin >> opt) || (opt <= 0 || opt >= 4));
	switch(opt){
		case 1:
			lives = 10;
			break;
		case 2:
			lives = 7;
			break;
		case 3:
			lives = 5;
			break;
	}
	do {
		cout << "Lives: " << lives << endl;
		cout << "Guess: ";
		while(!(cin >> guess)){
			cin.clear();
			cin.ignore(1000, '\n');
		}
		numberOfGuesses++;
		if (guess == target) {
			cout << "You win!\n";
			cout << "Number of Guesses: " << numberOfGuesses;
			break;
		}
		lives--;
		if (target > guess){
			cout << "Higher!\n";
		} else {
			cout << "Lower!\n";
		}
	}while(lives > 0);
	if (lives <= 0){
		cout << "You lose!\n";
		cout << "The Number is " << target;
	}
	
	return 0;
}
