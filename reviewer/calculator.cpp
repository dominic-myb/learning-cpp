#include<iostream>
#include<limits>
int main(){
	float num1;
	float num2;
	float res;
	char op;
	char again;
	do {
		num1 = 0;
		num2 = 0;
		res = 0;
		std::cout << "Enter first number: ";
	while(!(std::cin >> num1)){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "Enter operator [+, -, *, /]: ";
	std::cin >> op;
	while(op != '+' && op != '-' && op != '*' && op != '/'){
		std::cin >> op;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "Enter second number: ";
	while(!(std::cin >> num2)){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	switch(op){
		case '+':
			res = num1 + num2;
			break;
		case '-':
			res = num1 - num2;
			break;
		case '*':
			res = num1 * num2;
			break;
		case '/':
			if(num2 == 0){
				std::cout << "Error: Cannot divide by zero.";
				return 1;
			}
			res = num1 / num2;
			break;
	}
	std::cout << "\nResult: " << num1 << " " << op << " " << num2 << " = " << res;
	
	std::cout << "\nDo you want to calculate again? [y/n]: ";
    std::cin >> again;
	}while(again == 'y' || again == 'Y');
}
