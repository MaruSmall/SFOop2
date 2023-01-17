#include "Laptop.h"

Laptop::Laptop(int batteryLife) :PortableTechnology(batteryLife) {}

void Laptop::SetPrice(float price)
{
	_price = price;
}

float Laptop::GetPrice()
{
	return _price;
}

void Laptop::ShowSpec()
{
	cout << "BatteryLife: " << _batteryLife << endl;
}
