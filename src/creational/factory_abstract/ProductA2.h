#ifndef __PRODUCTA2_H__
#define __PRODUCTA2_H__

#include "IProductA.hpp"

class ProductA2 : public IProductA
{
public:
    ProductA2();
    ~ProductA2();

    virtual void ProductA() override;
};

#endif