#include <iostream>
#include <limits>

int main() {

	char op;
	double num1;
	double num2;
	double result;

	std::cout << "------calculator------\n";
	do
	{
	std::cout << "\nselect which operation you want to do (+, -, /, *)\n";
	std::cin >> op;
	
	if (op == '+' || op == '-' || op == '/' || op == '*') {
		break; 
	}
	else {
		std::cout << "\n---------------------\nInvalid operation! Please enter one of +, -, /, *.\n---------------------\n";
	}


	std::cin.clear(); 
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	
	} while (op !='+' && op != '-' && op != '/' && op != '*');
	
	do
	{
	std::cout << "\n enter the first number: \n";
	if (std::cin >> num1) {
		break; 
	}
	else {
		std::cout << "---------------------\nInvalid input! \n---------------------\n";
		std::cin.clear(); 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	}
	} while (true);
	

	do {
		std::cout << "\nenter the second number: \n";
		if (std::cin >> num2) {
			break; // Giriş başarılıysa döngüden çık
		}
		else {
			std::cout << "\n---------------------\nInvalid input! \n---------------------\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (true);

	switch (op) {
	case '+':
		result = num1 + num2;
		std::cout << "\nresult: " << result << "\n";
		break;
	case '-':
		result = num1 - num2;
		std::cout << "\nresult: " << result << "\n";
		break;
	case '/':
		result = num1 / num2;
		std::cout << "\nresult: " << result << "\n";
		break;
	case '*':
		result = num1 * num2;
		std::cout << "\nresult: " << result << "\n";
		break;
	default:
		std::cout << "\nthis isnt a valid operation";
		break;

	}


	std::cout << "\n----------------------";



}