#include <iostream>

#include "ConcretePublisher.h"
#include "SubscriberB.h"

SubscriberB::SubscriberB()
{
	Publisher::GetInstance()->Register(this, std::set<uint32_t>({ FICTION, GAME }));
}

SubscriberB::~SubscriberB()
{
	Publisher::GetInstance()->Unregister(this);
}

void SubscriberB::DealPacket(DataHeader * header)
{
	switch (header->pub_type)
	{
	case GAME:
		std::cout << "SubscriberB [" << (char*)((DataContent *)header)->pub_content << "] game update" << std::endl;
		break;
	case FICTION:
		std::cout << "SubscriberB [" << (char*)((DataContent *)header)->pub_content << "] fiction update" << std::endl;
		break;
	case COMIC:
		std::cout << "SubscriberB [" << (char*)((DataContent *)header)->pub_content << "] comic update" << std::endl;
		break;
	default:
		std::cout << "SubscriberB [" << (char*)((DataContent *)header)->pub_content << "] unknown" << std::endl;
		break;
	}
}
