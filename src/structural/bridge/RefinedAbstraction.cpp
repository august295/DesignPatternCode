#include <iostream>

#include "RefinedAbstraction.h"

RefinedAbstraction::RefinedAbstraction(Implementor* imp)
	: Abstraction(imp)
{

}

RefinedAbstraction::~RefinedAbstraction()
{

}

void RefinedAbstraction::Operation()
{
	std::cout << "RefinedAbstraction: ";
	PPubImp->OperationImp();
}
