#include "AdaptorB.h"

AdaptorB::AdaptorB(Adaptee * adaptee)
{
	PriAdaptee = adaptee;
}

AdaptorB::~AdaptorB()
{
    delete PriAdaptee;
}

void AdaptorB::Request()
{
	std::cout << "AdaptorB Request() is adapt ";
	PriAdaptee->SpecificRequest();
}