#ifndef __CONCRETEIMPLEMENTORA_H__
#define __CONCRETEIMPLEMENTORA_H__

#include "Implementor.hpp"

class ConcreteImplementorA : public Implementor
{
public:
	ConcreteImplementorA();
    ~ConcreteImplementorA();

    void OperationImp() override;
};

#endif