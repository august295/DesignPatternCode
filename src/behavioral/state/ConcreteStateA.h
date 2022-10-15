#ifndef __CONCRETESTATEA_H__
#define __CONCRETESTATEA_H__

#include "IState.hpp"

class ConcreteStateA : public IState
{
public:
    ConcreteStateA();
    ~ConcreteStateA();

    void DoThis() override;
	void DoThat() override;
};

#endif