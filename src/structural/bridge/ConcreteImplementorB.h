#ifndef __CONCRETEIMPLEMENTORB_H__
#define __CONCRETEIMPLEMENTORB_H__

#include "Implementor.hpp"

class ConcreteImplementorB : public Implementor
{
public:
	ConcreteImplementorB();
	~ConcreteImplementorB();

	void OperationImp() override;
};

#endif