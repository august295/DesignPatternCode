#include <iostream>

#include "ConcreteHandlerC.h"

ConcreteHandlerC::ConcreteHandlerC()
{}

ConcreteHandlerC::~ConcreteHandlerC()
{}

std::string ConcreteHandlerC::Handle(std::string request)
{
	if (request == "ConcreteHandlerC")
	{
		return "ConcreteHandlerC is Processing";
	}
	else
	{
		return Handler::Handle(request);
	}
}