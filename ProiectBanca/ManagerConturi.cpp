#include "ManagerConturi.h"

std::string ManagerConturi::CreatIban()
{
	return std::string();
}

void ManagerConturi::adaugareCont()
{
	std::string nume, prenume, iban;
	std::cout << "Introduceti numele persoanei: \n";
	std::cin >> nume;
	std::cout << "Introduceti prenumele persoanei: \n";
	std::cin >> prenume;

	//TODO: replace with create Iban()
	iban = "TestIban";
	ContBancar* cont = new ContBancar(nume, prenume, iban);
	m_listaConturi.push_back(cont);

	system("cls");

}