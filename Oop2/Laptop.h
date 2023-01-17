#pragma once
#include "PortableTechnology.h"
class Laptop final: public PortableTechnology// ноут
{
public:
	Laptop(int batteryLife);

	void SetPrice(float price) override;

	float GetPrice() override;
	void ShowSpec() override;
	
};

