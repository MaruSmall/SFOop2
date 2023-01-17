#pragma once
#include "Appliances.h"

class Teapot final: public Appliances
{
public:
	Teapot(int weight);	

	void SetPrice(float price) override;

	float GetPrice() override;
	
	void ShowSpec() override;
};

