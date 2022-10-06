#include <iostream>

#include "ConcreteHandlerB.h"

ConcreteHandlerB::ConcreteHandlerB()
{}

ConcreteHandlerB::~ConcreteHandlerB()
{}

std::string ConcreteHandlerB::Handle(std::string request)
{
	if (request == "ConcreteHandlerB")
	{
		return "ConcreteHandlerB is Processing";
	}
	else
	{
		return Handler::Handle(request);
	}
}