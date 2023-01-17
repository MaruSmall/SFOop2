#pragma once
#include "IElectronics.h"
class PortableTechnology: virtual public IElectronics //портативная техника
{
public:
	PortableTechnology(int batteryLife);
	PortableTechnology(int weight, float diagonal);
	virtual void ShowSpec() override;

	virtual int GetTimeWork();
	virtual void SetTimeWorkInHours(int hours);
	
protected:
	int _batteryLife;
	int _hours;
	float _diagonal;
	int _weight;
};

