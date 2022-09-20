#ifndef __IFACTORY_HPP__
#define __IFACTORY_HPP__

#include "IProduct.hpp"

class IFactory
{
public:
    IFactory(){};
    virtual ~IFactory(){};

    /* 抽象方法 */
    virtual IProduct * FactoryMethod() = 0;
};

#endif