#ifndef __STRATEGY_OCT_H__
#define __STRATEGY_OCT_H__

#include "strategy.hpp"

class strategy_oct : public strategy
{
public:
    strategy_oct();
    virtual ~strategy_oct();

    virtual void algorithm(int num);
};

#endif