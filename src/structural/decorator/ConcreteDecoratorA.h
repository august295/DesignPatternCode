#ifndef __CONCRETEDECORATORA_H__
#define __CONCRETEDECORATORA_H__

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator
{
public:
	ConcreteDecoratorA(IComponent* pCom);
	~ConcreteDecoratorA();

	std::string Execute() override;
};

#endif