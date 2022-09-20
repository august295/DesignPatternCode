#ifndef __PRODUCTB1_H__
#define __PRODUCTB1_H__

#include "IProductB.hpp"

class ProductB1 : public IProductB
{
public:
	ProductB1();
    ~ProductB1();

    virtual void ProductB() override;
};

#endif