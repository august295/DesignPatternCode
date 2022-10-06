#ifndef __CONCRETEHANDLERC_H__
#define __CONCRETEHANDLERC_H__

#include "Handler.h"

class ConcreteHandlerC : public Handler
{
public:
	ConcreteHandlerC();
    ~ConcreteHandlerC();

	std::string Handle(std::string request) override;
};

#endif