#ifndef __SUBSCRIBERB_H__
#define __SUBSCRIBERB_H__

#include "ISubscriber.hpp"

class SubscriberB : public ISubscriber
{
public:
	SubscriberB();
	~SubscriberB();

	void DealPacket(DataHeader * header) override;
};

#endif