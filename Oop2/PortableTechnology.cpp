#include "PortableTechnology.h"

PortableTechnology::PortableTechnology(int batteryLife) : _batteryLife(batteryLife) {}
PortableTechnology::PortableTechnology(int weight, float diagonal) : _weight(weight), _diagonal(diagonal) {}

void PortableTechnology::ShowSpec()
{
	cout << "life battery is " << _batteryLife << endl;
}

int PortableTechnology::GetTimeWork()
{
	return _hours;
}

void PortableTechnology::SetTimeWorkInHours(int hours)
{
	_hours = hours;
}