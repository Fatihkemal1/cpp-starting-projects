#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <limits>  

int main() {
    int sayi, tahmin;
    bool bildiMi = false; 

    srand(time(0));
    sayi = (rand() % 100) + 1;

    std::cout << "--- sayi tahmin oyunu ---\n";
    std::cout << "1 ile 100 arasinda bir sayi tuttum. 6 hakkin var!\n";

    for (int i = 1; i <= 6; i++) {
        std::cout << "\n" << i << ". Hakkin. Tahminini gir: ";

        if (!(std::cin >> tahmin) || tahmin < 1 || tahmin > 100) {
            std::cout << "1-100 arasinda bir sayi gir!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            i--;
            continue;
        }

        if (tahmin == sayi) {
            std::cout << "Tebrikler! " << i << ". denemede dogru bildiniz!\n";
            bildiMi = true;
            break;
        }
        else if (tahmin < sayi) {
            std::cout << "Daha buyuk bir sayi giriniz.\n";
        }
        else {
            std::cout << "Daha kucuk bir sayi giriniz.\n";
        }
    }

    if (!bildiMi) {
        std::cout << "\nHakkin bitti! Maalesef bilemedin.\n";
        std::cout << "Tuttugum sayi: " << sayi << " idi.\n";
    }

    return 0;
}