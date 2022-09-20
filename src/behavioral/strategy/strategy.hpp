#ifndef __STRATEGY_HPP__
#define __STRATEGY_HPP__

class strategy
{
public:
    strategy(){};
    virtual ~strategy(){};

    virtual void algorithm(int num) = 0;
};

#endif