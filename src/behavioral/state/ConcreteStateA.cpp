#include <iostream>

#include "Context.h"
#include "ConcreteStateB.h"
#include "ConcreteStateA.h"

ConcreteStateA::ConcreteStateA()
{
}

ConcreteStateA::~ConcreteStateA()
{
}

void ConcreteStateA::DoThis()
{
	std::cout << "ConcreteStateA handles request.\n";
}

void ConcreteStateA::DoThat()
{
	std::cout << "ConcreteStateA wants to change the state of the context.\n";
	this->PProContext->ChangeState(new ConcreteStateB);
}
