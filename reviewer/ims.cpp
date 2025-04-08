#include <iostream>
#include <limits>

using namespace std;

void mainMenu(), loginMenu(), registerMenu();
void invalidInput();

int main() {
  mainMenu();
  return 0;
}

void mainMenu() {
  int opt = 0;
  do {
    system("cls");
    cout << "+-----------------------------+" << endl;
    cout << "| INVENTORY MANAGEMENT SYSTEM |" << endl;
    cout << "+-----------------------------+" << endl;
    cout << "| [1] - Login Account         |" << endl;
    cout << "| [2] - Register an Account   |" << endl;
    cout << "| [3] - Exit                  |" << endl;
    cout << "+-----------------------------+" << endl;
    cout << " Select option: ";
    cin >> opt;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      invalidInput();
    }
    switch (opt) {
    case 1: {
			loginMenu();
      break;
    }
    case 2: {
			registerMenu();
      break;
    }
    case 3: {
      break;
    }
    }

  } while (opt != 3);
  cout << "+-----------------------------+" << endl;
  cout << "|       SYSTEM EXITING!       |" << endl;
  cout << "+-----------------------------+" << endl;
  system("pause");
}

void loginMenu() {
	string username = "";
	string password = "";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	system("cls");
	cout << "+-----------------------------+" << endl;
 	cout << "| INVENTORY MANAGEMENT SYSTEM |" << endl;
 	cout << "+-----------------------------+" << endl;
 	cout << "  Username: ";
 	getline(cin, username);
 	cout << "  Password: ";
 	getline(cin, password);
}

void registerMenu() {
	system("cls");
}

void invalidInput() {
	cout << endl;
  cout << "+-----------------------------+" << endl;
  cout << "|        INVALID INPUT!       |" << endl;
  cout << "+-----------------------------+" << endl;
  system("pause");
}
