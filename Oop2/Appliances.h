#pragma once
#include "IElectronics.h"

class Appliances: virtual public IElectronics //бытовая техника 
{
public:
    Appliances(int weight);
    virtual void ShowSpec() override;
    
protected:
    int _weight;

};

