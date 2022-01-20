#include <iostream>
#include "ContBancar.h"

int main()
{
    std::cout << "Alege una dintre urmatoarele optiuni: \n";
    std::cout << "1 -> Numar conturi\n";
    std::cout << "2 -> Creare cont\n";
    std::cout << "3 -> Modificare cont\n";
    std::cout << "4 -> Stergere cont\n";
    std::cout << "5 -> Eliberare/Depunere\n";
    std::cout << "6 -> Detalii cont\n";

    int optiune;
    std::cout << "Introduceti operatia pe care o doriti\n";
    std::cin >> optiune;
    switch(optiune)
    {
    case 1:
        std::cout << "Ati ales optiunea 1\n";
        break;
    case 2:
        std::cout << "Ati ales optiunea 2\n";
        break;
    case 3:
        std::cout << "Ati ales optiunea 3\n";
        break;
    case 4:
        std::cout << "Ati ales optiunea 4\n";
        break;
    case 5:
        std::cout << "Ati ales optiunea 5\n";
        break;
    case 6:
        std::cout << "Ati ales optiunea 6\n";
        break;
    default:
        std::cout << "Optiune invalida\n";
        break;
    }

}