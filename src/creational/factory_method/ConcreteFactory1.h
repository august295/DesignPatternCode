#ifndef __CONCRETEFACTORY1_H__
#define __CONCRETEFACTORY1_H__

#include "IFactory.hpp"
#include "ConcreteProduct1.h"

class ConcreteFactory1 : public IFactory
{
public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual IProduct * FactoryMethod() override;
};

#endif