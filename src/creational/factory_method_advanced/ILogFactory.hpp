#ifndef __ILOGFACTORY_HPP__
#define __ILOGFACTORY_HPP__

#include "ILog.hpp"

class ILogFactory
{
public:
    ILogFactory(){};
    virtual ~ILogFactory(){};

    /* 抽象方法 */
    virtual ILog * CreateLog() = 0;
};

#endif