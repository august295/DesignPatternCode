#ifndef __FACADE_H__
#define __FACADE_H__

#include <iostream>

#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"

class Facade
{
public:
    Facade();
	Facade(SystemA * systemA, SystemB * systemB, SystemC * systemC);
    ~Facade();

    void WrapOperation(); /* 组合操作 */

private:
	SystemA * PPriSystemA;
	SystemB * PPriSystemB;
    SystemC * PPriSystemC;
};

#endif