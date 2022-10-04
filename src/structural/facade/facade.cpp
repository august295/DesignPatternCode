#include "Facade.h"

Facade::Facade()
{
}

Facade::Facade(SystemA * systemA, SystemB * systemB, SystemC * systemC)
	: PPriSystemA(systemA)
	, PPriSystemB(systemB)
	, PPriSystemC(systemC)
{

}

void Facade::WrapOperation()
{
	std::cout << "WrapOperation Start" << std::endl;
	PPriSystemA->OperationA();
	PPriSystemB->OperationB();
	PPriSystemC->OperationC();
	std::cout << "WrapOperation End" << std::endl;
}

Facade::~Facade()
{
	delete PPriSystemA;
    delete PPriSystemB;
    delete PPriSystemC;
}