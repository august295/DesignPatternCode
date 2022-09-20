#ifndef __CONCRETEFACTORY1_H__
#define __CONCRETEFACTORY1_H__

#include "IFactory.hpp"

class ConcreteFactory1 : public IFactory
{
public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual IProductA * CreateProductA() override;
	virtual IProductB * CreateProductB() override;
};

#endif