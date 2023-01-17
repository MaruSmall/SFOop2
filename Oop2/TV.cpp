#include "TV.h"

TV::TV(int weight, float diagonal) : Appliances(weight), PortableTechnology(diagonal) {}

void TV::SetPrice(float price)
{
	_price = price;
}

float TV::GetPrice()
{
	return _price;
}

void TV::ShowSpec()
{
	std::cout << "Weight: " << Appliances::_weight <<" Diagonal: "<< _diagonal << endl;
}