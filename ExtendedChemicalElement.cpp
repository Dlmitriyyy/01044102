#include <memory>
#include "ExtendedChemicalElement.h"

ExtendedChemicalElement::ExtendedChemicalElement(string pName) : ChemicalElement(pName)
{
	pInformation = make_unique<ChemicalElementsInformation>();
}

void ExtendedChemicalElement::Show()
{
	cout << "\n============================\n";
	ChemicalElement::Show();
	density = pInformation->GetDensity(name);
	position = pInformation->GetPositionFromPeriodicTable(name);
	cout << "\nDensity of Element: " << density << endl;
	cout << "\nPosition in Periodic Table: " << position << endl;
	cout << "\n============================\n";
}