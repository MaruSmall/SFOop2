#pragma once
#include "PortableTechnology.h"

class Phone final: public PortableTechnology
{
public:
	Phone(int batteryLife);

	void SetPrice(float price) override;

	float GetPrice() override;
	void ShowSpec() override;

};

