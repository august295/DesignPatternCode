#ifndef __CONCRETEHANDLERA_H__
#define __CONCRETEHANDLERA_H__

#include "Handler.h"

class ConcreteHandlerA : public Handler
{
public:
    ConcreteHandlerA();
    ~ConcreteHandlerA();

	std::string Handle(std::string request) override;
};

#endif