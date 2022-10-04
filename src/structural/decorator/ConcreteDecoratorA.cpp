#include <iostream>

#include "ConcreteDecoratorA.h"

ConcreteDecoratorA::ConcreteDecoratorA(IComponent* pCom)
	: Decorator(pCom)
{

}

ConcreteDecoratorA::~ConcreteDecoratorA()
{

}

std::string ConcreteDecoratorA::Execute()
{
	// TODO
	return "ConcreteDecoratorA(" + Decorator::Execute() + ")";
}
