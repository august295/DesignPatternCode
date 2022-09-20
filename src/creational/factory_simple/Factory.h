#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "IProduct.hpp"

enum Goods
{
    TYPE0,
	TYPE1,
};

class Factory
{
public:
    Factory();
    ~Factory();

    /* 一个工厂可以生产所有产品（根据传入信息） */
    static IProduct * FactorySimple(Goods type);
};

#endif