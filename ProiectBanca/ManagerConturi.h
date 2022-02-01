#pragma once
#include "ContBancar.h"
#include <vector>
#include <iostream>
#include "FileManager.h"

class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	std::string CreateIban();
	ContBancar* FindAccout();
	FileManager* m_fileManager;

public:
	void adaugareCont();

	int GetNumarConturi();

	void printAllCounturi();

	void printOneCont();

	void EraseAccount();

	void Eliberare_Depunere();

	ManagerConturi();
	~ManagerConturi();

};

