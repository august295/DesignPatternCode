#ifndef __CONCRETEFACTORY2_H__
#define __CONCRETEFACTORY2_H__

#include "IFactory.hpp"
#include "ConcreteProduct2.h"

class ConcreteFactory2 : public IFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();

	virtual IProduct * FactoryMethod() override;
};

#endif