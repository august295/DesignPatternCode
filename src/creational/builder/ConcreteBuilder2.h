#ifndef __CONCRETEBUILDER2_H__
#define __CONCRETEBUILDER2_H__

#include <iostream>

#include "IBuilder.hpp"

class ConcreteBuilder2 : public IBuilder
{
public:
	ConcreteBuilder2();
	virtual ~ConcreteBuilder2();

	virtual void BuildPartA() override;
	virtual void BuildPartB() override;
	virtual void BuildPartC() override;
};

#endif