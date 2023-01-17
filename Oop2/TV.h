#pragma once
#include "Appliances.h"
#include "PortableTechnology.h"

class TV final : public Appliances, PortableTechnology//TV
{
public:
	TV(int weight, float diagonal);

	void SetPrice(float price) override;
	float GetPrice() override;
	
	void ShowSpec() override;
private:
	float _diagonal;
};

