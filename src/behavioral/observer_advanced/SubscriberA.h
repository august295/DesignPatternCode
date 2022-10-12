#ifndef __SUBSCRIBERA_H__
#define __SUBSCRIBERA_H__

#include "ISubscriber.hpp"

class SubscriberA : public ISubscriber
{
public:
	SubscriberA();
	~SubscriberA();

	void DealPacket(DataHeader * header) override;
};

#endif
