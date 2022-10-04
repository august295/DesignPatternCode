#ifndef __CONCRETEDECORATORB_H__
#define __CONCRETEDECORATORB_H__

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(IComponent* pCom);
	~ConcreteDecoratorB();

	std::string Execute() override;
};

#endif