#include "Phone.h"

Phone::Phone(int batteryLife) : PortableTechnology(batteryLife) {}

void Phone::SetPrice(float price)
{
	_price = price;
}

float Phone::GetPrice()
{
	return _price;
}

void Phone::ShowSpec()
{
	cout << "BatteryLife: " << _batteryLife << endl;
}
