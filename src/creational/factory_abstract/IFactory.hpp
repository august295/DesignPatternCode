#ifndef __IFACTORY_HPP__
#define __IFACTORY_HPP__

#include "IProductA.hpp"
#include "IProductB.hpp"

class IFactory
{
public:
    IFactory(){};
    virtual ~IFactory(){};

    /* 抽象方法 */
    virtual IProductA * CreateProductA() = 0;
	virtual IProductB * CreateProductB() = 0;
};

#endif