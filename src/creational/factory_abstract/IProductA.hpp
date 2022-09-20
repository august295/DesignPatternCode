#ifndef __IPRODUCTA_HPP__
#define __IPRODUCTA_HPP__

#include <iostream>

class IProductA
{
public:
    IProductA(){};
    virtual ~IProductA(){};

    virtual void ProductA() = 0;
};

#endif