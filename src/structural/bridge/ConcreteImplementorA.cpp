#include <iostream>

#include "ConcreteImplementorA.h"

ConcreteImplementorA::ConcreteImplementorA()
{

}

ConcreteImplementorA::~ConcreteImplementorA()
{

}

void ConcreteImplementorA::OperationImp()
{
	std::cout << "imp in ConcreteImplementorA style" << std::endl;
}
