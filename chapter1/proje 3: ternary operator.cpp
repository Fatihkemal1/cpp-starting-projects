#include <iostream>

int main() {

	double grade;
	std::cout << "what is your grade?\n";
	std::cin >> grade;

	std::cout << (grade >= 75 ? "\nyou passed with a good grade \n\n" :
		grade >= 60 ? "\nyou passed with a mediocre grade \n" :
		grade >= 50 ? "\nyou passed with a bad grade\n" : "you failed \n");

	return 0;
}
