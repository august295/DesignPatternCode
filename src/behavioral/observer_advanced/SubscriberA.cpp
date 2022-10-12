#include <iostream>

#include "ConcretePublisher.h"
#include "SubscriberA.h"

SubscriberA::SubscriberA()
{
	Publisher::GetInstance()->Register(this);
}

SubscriberA::~SubscriberA()
{
	Publisher::GetInstance()->Unregister(this);
}

void SubscriberA::DealPacket(DataHeader * header)
{
	switch (header->pub_type)
	{
	case GAME:
		std::cout << "SubscriberA [" << (char*)((DataContent *)header)->pub_content << "] game update" << std::endl;
		break;
	case FICTION:
		std::cout << "SubscriberA [" << (char*)((DataContent *)header)->pub_content << "] fiction update" << std::endl;
		break;
	case COMIC:
		std::cout << "SubscriberA [" << (char*)((DataContent *)header)->pub_content << "] comic update" << std::endl;
		break;
	default:
		std::cout << "SubscriberA [" << (char*)((DataContent *)header)->pub_content << "] unknown" << std::endl;
		break;
	}
}