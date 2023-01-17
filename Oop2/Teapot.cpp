#include "Teapot.h"

Teapot::Teapot(int weight) :Appliances(weight) {}

void Teapot::SetPrice(float price)
{
	_price = price;
}

float Teapot::GetPrice()
{
	return _price;
}

void Teapot::ShowSpec()
{
	cout << "Weight: " << _weight << endl;
}