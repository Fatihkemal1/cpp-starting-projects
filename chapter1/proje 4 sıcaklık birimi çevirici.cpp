#include <iostream>
#include <limits>
#include <cctype>

static double fahcel(double temp1);
static double celfah(double temp1);
static double kelfah(double temp1);
static double fahkel(double temp1);

int main() {

    double tempin, tempout;
    char unit1, unit2, secim;
    do {
        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\nelinde olan derece olcusunu gir (celsius: 'c', fahrenheit: 'f', kelvin: 'k') : \n";

        do
        {
            std::cin >> unit1;
            unit1 = tolower(unit1);
            if (unit1 == 'c' || unit1 == 'k' || unit1 == 'f') {
                break;
            }
            else {
                std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz derece olcusu lutfen celsius, fahrenheit veya kelvin arasindan secin(celsius:'c', fahrenheit:'f', kelvin'k'):\n----------------------------------------------------------------------------------------------------------------------\n";
            }

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        } while (unit1 != 'c' && unit1 != 'k' && unit1 != 'f');

        switch (unit1)
        {
        case 'c':
            std::cout << "\ndonusturmek istediginiz derece olcusunu giriniz(fahrenheit:'f', kelvin:'k')\n";
            do {
                std::cin >> unit2;
                unit2 = tolower(unit2);
                if (unit2 == 'k' || unit2 == 'f') {
                    break;
                }
                else {
                    std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz derece olcusu lutfen celsius, fahrenheit veya kelvin arasından secin(celsius:'c', fahrenheit:'f', kelvin'k'):\n----------------------------------------------------------------------------------------------------------------------\n";
                }

                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            } while (unit2 != 'k' && unit2 != 'f');


            switch (unit2)
            {
            case 'k':
                std::cout << "\ndonusturmek istedigin degeri gir:\n";
                do
                {

                    if (std::cin >> tempin) {
                        break;
                    }
                    else {
                        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz deger!!!\n----------------------------------------------------------------------------------------------------------------------\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }

                } while (true);

                tempout = tempin + 273.15;
                std::cout << tempout << "\n";
                break;

            case 'f':
                std::cout << "\ndonusturmek istedigin degeri gir:\n";
                do
                {
                    if (std::cin >> tempin) {
                        break;
                    }
                    else {
                        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz deger!!!\n----------------------------------------------------------------------------------------------------------------------\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }

                } while (true);

                std::cout << (tempout = celfah(tempin));
                break;

            }
            break;
        case 'k':
            std::cout << "\ndonusturmek istediginiz derece olcusunu giriniz(celsius:'c', fahrenheit:'f')\n";
            do {
                std::cin >> unit2;
                unit2 = tolower(unit2);
                if (unit2 == 'c' || unit2 == 'f') {
                    break;
                }
                else {
                    std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz derece olcusu lutfen celsius, fahrenheit veya kelvin arasından secin(celsius:'c', fahrenheit:'f', kelvin'k'):\n----------------------------------------------------------------------------------------------------------------------\n";
                }
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } while (unit2 != 'c' && unit2 != 'f');

            switch (unit2)
            {
            case 'c':
                std::cout << "\ndonusturmek istedigin degeri gir:\n";
                do
                {
                    if (std::cin >> tempin) {
                        break;
                    }
                    else {
                        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz deger!!!\n----------------------------------------------------------------------------------------------------------------------\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                } while (true);
                tempout = tempin - 273.15;
                std::cout << tempout << "\n";
                break;
            case 'f':
                std::cout << "\ndonusturmek istedigin degeri gir:\n";
                do
                {
                    if (std::cin >> tempin) {
                        break;
                    }
                    else {
                        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz deger!!!\n----------------------------------------------------------------------------------------------------------------------\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                } while (true);
                std::cout << (tempout = kelfah(tempin));
                break;
            }
            break;

        case 'f':
            std::cout << "\ndonusturmek istediginiz derece olcusunu giriniz(celsius:'c', kelvin:'k')\n";
            do
            {
                std::cin >> unit2;
                unit2 = tolower(unit2);
                if (unit2 == 'c' || unit2 == 'k') {
                    break;
                }
                else {
                    std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz derece olcusu lutfen celsius, celsius veya kelvin arasından secin(celsius:'c', kelvin'k'):\n----------------------------------------------------------------------------------------------------------------------\n";
                }
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } while (unit2 != 'c' && unit2 != 'k');

            switch (unit2)
            {
            case 'c':
                std::cout << "\ndonusturmek istedigin degeri gir:\n";
                do
                {
                    if (std::cin >> tempin) {
                        break;
                    }
                    else {
                        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz deger!!!\n----------------------------------------------------------------------------------------------------------------------\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                } while (true);
                tempout = fahcel(tempin);
                std::cout << tempout << "\n";
                break;
            case 'k':
                std::cout << "\ndonusturmek istedigin degeri gir:\n";
                do
                {
                    if (std::cin >> tempin) {
                        break;
                    }
                    else {
                        std::cout << "\n----------------------------------------------------------------------------------------------------------------------\ngecersiz deger!!!\n----------------------------------------------------------------------------------------------------------------------\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                } while (true);
                std::cout << (tempout = fahkel(tempin));
                break;
            }
            break;


        }
    std::cout << "\nDevam etmek istiyor musunuz? (e/h): \n";
    std::cin >> secim;
    secim = tolower(secim);
    std::cin.ignore();
    }while (secim == 'e');
    return 0;
}

double fahcel(double temp1) {
    double temp2;
    temp2 = (temp1 - 32) * 5.0 / 9.0;
    return temp2;
}

double celfah(double temp1) {
    double temp2;
    temp2 = (temp1 * 9.0 / 5.0) + 32.0;
    return temp2;
}

double kelfah(double temp1) {
    double temp2;
    temp2 = 1.8 * (temp1 - 273.15) + 32.0;
    return temp2;
}

double fahkel(double temp1) {
    double temp2;
    temp2 = (temp1 - 32.0) / 1.8 + 273.15;
    return temp2;
}