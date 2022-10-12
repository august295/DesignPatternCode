#include "Publisher.h"
#include "ConcretePublisher.h"

std::shared_ptr<ConcretePublisher> Publisher::ConcretePublisherPtr = nullptr;
std::shared_ptr<ConcretePublisher> Publisher::GetInstance()
{
	if (ConcretePublisherPtr == nullptr)
	{
		ConcretePublisherPtr = std::make_shared<ConcretePublisher>();
	}
	return ConcretePublisherPtr;
}

Publisher::Publisher()
{

}

Publisher::~Publisher()
{

}