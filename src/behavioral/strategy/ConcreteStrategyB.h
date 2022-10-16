#ifndef __CONCRETESTRATEGYB_H__
#define __CONCRETESTRATEGYB_H__

#include "IStrategy.hpp"

class ConcreteStrategyB : public IStrategy
{
public:
    ConcreteStrategyB();
    ~ConcreteStrategyB();

    virtual void Algorithm(std::vector<int> vec) override;
};

#endif