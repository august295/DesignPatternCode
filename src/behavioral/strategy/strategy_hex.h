#ifndef __STRATEGY_HEX_H__
#define __STRATEGY_HEX_H__

#include "strategy.hpp"

class strategy_hex : public strategy
{
public:
    strategy_hex();
    virtual ~strategy_hex();

    virtual void algorithm(int num);
};

#endif