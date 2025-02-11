#include <iostream>

#include "Context.h"

Context::Context()
{
    PPriFlyweight   = nullptr;
    PPriUniqueState = nullptr;
}

Context::Context(const SharedState& sharedState, const UniqueState& uniqueState)
{
    PPriFlyweight   = FlyweightFactory::GetInstance()->GetFlyweight(sharedState);
    PPriUniqueState = new UniqueState(uniqueState);
}

Context::~Context()
{
    delete PPriUniqueState;
    PPriUniqueState = nullptr;
}

Flyweight* Context::GetFlyweight()
{
    return PPriFlyweight;
}

void Context::Operation()
{
    PPriFlyweight->Operation();
    std::cout << " and " << *PPriUniqueState;
}