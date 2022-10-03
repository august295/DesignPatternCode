#include "AdaptorA.h"

AdaptorA::AdaptorA(Adaptee * adaptee)
{
    PriAdaptee = adaptee;
}

AdaptorA::~AdaptorA()
{
    delete PriAdaptee;
}

void AdaptorA::Request()
{
	std::cout << "AdaptorA Request() is adapt ";
	PriAdaptee->SpecificRequest();
}