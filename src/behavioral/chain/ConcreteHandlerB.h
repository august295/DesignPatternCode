#ifndef __CONCRETEHANDLERB_H__
#define __CONCRETEHANDLERB_H__

#include "Handler.h"

class ConcreteHandlerB : public Handler
{
public:
	ConcreteHandlerB();
    ~ConcreteHandlerB();

	std::string Handle(std::string request) override;
};

#endif