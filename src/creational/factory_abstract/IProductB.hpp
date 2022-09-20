#ifndef __IPRODUCTB_HPP__
#define __IPRODUCTB_HPP__

#include <iostream>

class IProductB
{
public:
	IProductB(){};
    virtual ~IProductB(){};

    virtual void ProductB() = 0;
};

#endif