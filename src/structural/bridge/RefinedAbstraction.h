#ifndef __REFINEDABSTRACTION_H__
#define __REFINEDABSTRACTION_H__

#include "Abstraction.hpp"

class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction(Implementor* imp);
    ~RefinedAbstraction();

    void Operation() override;
};

#endif