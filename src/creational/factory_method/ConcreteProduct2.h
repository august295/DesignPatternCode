#ifndef __CONCRETEPRODUCT2_H__
#define __CONCRETEPRODUCT2_H__

#include "IProduct.hpp"

class ConcreteProduct2 : public IProduct
{
public:
    ConcreteProduct2();
    ~ConcreteProduct2();

    virtual void ProductSomething() override;
};

#endif