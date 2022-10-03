#include <iostream>

#include "ConcreteImplementorB.h"

ConcreteImplementorB::ConcreteImplementorB()
{

}

ConcreteImplementorB::~ConcreteImplementorB()
{

}

void ConcreteImplementorB::OperationImp()
{
	std::cout << "imp in ConcreteImplementorB style" << std::endl;
}
