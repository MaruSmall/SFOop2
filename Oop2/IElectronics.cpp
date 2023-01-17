#include "IElectronics.h"

void IElectronics::SetPrice(float price)
{
	_price = price;
}

float IElectronics::GetPrice()
{
	return _price;
}

void IElectronics::ShowSpec()
{
	cout << "Electronics Item" << endl;
}

