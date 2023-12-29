#include <iostream>
#include <memory>
#include "ChemicalElement.h"
#include "ExtendedChemicalElement.h"
using namespace std;
int main()
{
	unique_ptr<ChemicalElement> ptr = make_unique<ExtendedChemicalElement>("silicon");
	ptr->Show();

	ptr = make_unique<ExtendedChemicalElement>("aluminum");
	ptr->Show();

	ptr = make_unique<ExtendedChemicalElement>("barium");
	ptr->Show();

	return 0;
}