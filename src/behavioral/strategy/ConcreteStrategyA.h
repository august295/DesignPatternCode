#ifndef __CONCRETESTRATEGYA_H__
#define __CONCRETESTRATEGYA_H__

#include "IStrategy.hpp"

class ConcreteStrategyA : public IStrategy
{
public:
    ConcreteStrategyA();
    ~ConcreteStrategyA();

	virtual void Algorithm(std::vector<int> vec) override;
};

#endif