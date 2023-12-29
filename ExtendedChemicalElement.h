#pragma once
#include <memory>
#include "ChemicalElement.h"
#include "ChemicalElementsInformation.h"

// Адаптер
class ExtendedChemicalElement : public ChemicalElement
{
private:
	unique_ptr<ChemicalElementsInformation> pInformation;
public:
	ExtendedChemicalElement(string);
	virtual ~ExtendedChemicalElement();
	void Show();
};