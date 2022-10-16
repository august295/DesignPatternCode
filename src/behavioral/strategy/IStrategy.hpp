#ifndef __ISTRATEGY_HPP__
#define __ISTRATEGY_HPP__

#include <vector>

class IStrategy
{
public:
    IStrategy(){};
    virtual ~IStrategy(){};

    virtual void Algorithm(std::vector<int> vec) = 0;
};

#endif