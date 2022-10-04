#include <iostream>

#include "ConcreteDecoratorB.h"

ConcreteDecoratorB::ConcreteDecoratorB(IComponent* pCom)
	: Decorator(pCom)
{

}

ConcreteDecoratorB::~ConcreteDecoratorB()
{

}

std::string ConcreteDecoratorB::Execute()
{
	// TODO
	return "ConcreteDecoratorB(" + Decorator::Execute() + ")";
}
