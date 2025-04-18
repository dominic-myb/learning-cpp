#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int guess = 0;
	int numberOfGuesses = 0;
	int lives = 7;
	int target = (rand() % 101) + 1;
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
	}
	
	return 0;
}
