#ifndef __CONCRETEPRODUCT1_H__
#define __CONCRETEPRODUCT1_H__

#include "IProduct.hpp"

class ConcreteProduct1 : public IProduct
{
public:
    ConcreteProduct1();
    ~ConcreteProduct1();

    virtual void ProductSomething() override;
};

#endif