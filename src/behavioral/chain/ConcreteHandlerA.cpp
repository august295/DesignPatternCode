#include <iostream>

#include "ConcreteHandlerA.h"

ConcreteHandlerA::ConcreteHandlerA()
{}

ConcreteHandlerA::~ConcreteHandlerA()
{}

std::string ConcreteHandlerA::Handle(std::string request)
{
	if (request == "ConcreteHandlerA")
	{
		return "ConcreteHandlerA is Processing";
	}
	else
	{
		return Handler::Handle(request);
	}
}