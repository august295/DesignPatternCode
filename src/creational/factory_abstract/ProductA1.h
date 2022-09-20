#ifndef __PRODUCTA1_H__
#define __PRODUCTA1_H__

#include "IProductA.hpp"

class ProductA1 : public IProductA
{
public:
    ProductA1();
    ~ProductA1();

	virtual void ProductA() override;
};

#endif