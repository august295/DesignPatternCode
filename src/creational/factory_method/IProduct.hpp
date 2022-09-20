#ifndef __IPRODUCT_HPP__
#define __IPRODUCT_HPP__

#include <iostream>

class IProduct
{
public:
    IProduct(){};
    virtual ~IProduct(){};

    virtual void ProductSomething() = 0;
};

#endif