#ifndef __CONCRETEFACTORY2_H__
#define __CONCRETEFACTORY2_H__

#include "IFactory.hpp"
#include "IProductA.hpp"
#include "IProductB.hpp"

class ConcreteFactory2 : public IFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();

	virtual IProductA * CreateProductA() override;
	virtual IProductB * CreateProductB() override;
};

#endif