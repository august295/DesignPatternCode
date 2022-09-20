#ifndef __CONCRETEBUILDER1_H__
#define __CONCRETEBUILDER1_H__

#include <iostream>

#include "IBuilder.hpp"

class ConcreteBuilder1 : public IBuilder
{
public:
	ConcreteBuilder1();
	virtual ~ConcreteBuilder1();

	virtual void BuildPartA() override;
	virtual void BuildPartB() override;
	virtual void BuildPartC() override;
};

#endif