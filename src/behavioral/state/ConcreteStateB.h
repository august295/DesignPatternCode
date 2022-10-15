#ifndef __CONCRETESTATEB_H__
#define __CONCRETESTATEB_H__

#include "IState.hpp"

class ConcreteStateB : public IState
{
public:
	ConcreteStateB();
	~ConcreteStateB();

	void DoThis() override;
	void DoThat() override;
};

#endif