#include <iostream>

char getoyuncu();
char getai();
void cevapgös(char oyuncusec);
void kazanan(char oyuncu, char ai);




int main()
{
	char oyuncu;
	char ai;

	oyuncu = getoyuncu();
	std::cout << "\noyuncu ";
	cevapgös(oyuncu);
	std::cout << "'i secti\n";

	ai = getai();
	std::cout << "\nrakip ";
	cevapgös(ai);
	std::cout << "'i secti\n";

	kazanan(oyuncu, ai);
	return 0;
}

char getoyuncu() {

	char oyuncu;

	std::cout << "\ntas kagit makas \n";
	do {std::cout << "\n---------------------------\n";
	
		std::cout << "tas icin 't', kagit icin 'k' ve makas icin 'm' yaz\n \n ";
		std::cin >> oyuncu;
		
	} while (oyuncu != 't' && oyuncu != 'k' && oyuncu != 'm');
	std::cout << "---------------------------\n";
	return oyuncu;
}
char getai() {
	
	srand(time(0));
	int rakip = rand() % 3 +1;
	switch (rakip)
	{
	case 1: return 't';
		break;
	case 2: return 'k';
		break;
	case 3: return 'm';
		break;
	}

	return rakip;
}
void cevapgös(char oyuncusec) {
	switch (oyuncusec) {
		case 't':
			std::cout << "tas";
			break;
		case 'k':
			std::cout << "kagit";
			break;
		case 'm':
			std::cout << "makas";
			break;
	}	
}
void kazanan(char oyuncu, char ai) {
	switch (oyuncu)
	{
	case 't':
		if (ai == 't') {
			std::cout << "\nberabere\n\n\n\n\n";
		}
		else if (ai == 'k') {
			std::cout << "\nrakip kazandi\n\n\n\n\n";
		}
		else {
			std::cout << "\noyuncu kazandi\n\n\n\n\n";

		}
		break;

	case 'k':
		if (ai == 'k') {
			std::cout << "\nberabere\n\n\n\n\n";
		}
		else if (ai == 'm') {
			std::cout << "\nrakip kazandi\n\n\n\n\n";
		}
		else {
			std::cout << "\noyuncu kazandi\n\n\n\n\n";
		}
		break;

	case 'm':
		if (ai == 'm') {
			std::cout << "\nberabere\n\n\n\n\n";
		}
		else if (ai == 't') {
			std::cout << "\nrakip kazandi\n\n\n\n\n";
		}
		else {
			std::cout << "\noyuncu kazandi\n\n\n\n\n";
		}
		break;
	}
}
