#ifndef __PRODUCTB2_H__
#define __PRODUCTB2_H__

#include "IProductB.hpp"

class ProductB2 : public IProductB
{
public:
	ProductB2();
    ~ProductB2();

    virtual void ProductB() override;
};

#endif