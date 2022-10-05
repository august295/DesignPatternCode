#include "Flyweight.h"

Flyweight::Flyweight()
{
}

Flyweight::Flyweight(const SharedState &sharedState)
	: PPriSharedState(new SharedState(sharedState))
{

}

Flyweight::~Flyweight()
{
	delete PPriSharedState;
	PPriSharedState = nullptr;
}

void Flyweight::Operation()
{
	std::cout << "Flyweight: " << *PPriSharedState;
}
