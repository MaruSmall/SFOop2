#pragma once
#include "PortableTechnology.h"
class Laptop final: public PortableTechnology// ����
{
public:
	Laptop(int batteryLife);

	void SetPrice(float price) override;

	float GetPrice() override;
	void ShowSpec() override;
	
};

