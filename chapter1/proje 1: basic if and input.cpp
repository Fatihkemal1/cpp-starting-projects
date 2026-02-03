#include <iostream>
#include <string>

int main() {


	std::string isim;
	std::cout << "sa \n";
	std::getline(std::cin >> std::ws, isim);

	if (isim == "as") {

		std::cout << "baybay";
		
	}
	else
	{
		std::cout << "ne diyon";
	}
}
