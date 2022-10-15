#include <iostream>

#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

ConcreteStateB::ConcreteStateB()
{
}

ConcreteStateB::~ConcreteStateB()
{
}

void ConcreteStateB::DoThis()
{
	std::cout << "ConcreteStateB handles request.\n";
}

void ConcreteStateB::DoThat()
{
	std::cout << "ConcreteStateB wants to change the state of the context.\n";
	this->PProContext->ChangeState(new ConcreteStateA);
}
