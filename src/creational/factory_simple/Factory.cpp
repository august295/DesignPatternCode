#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
#include "Factory.h"

Factory::Factory()
{
}

Factory::~Factory()
{
}

IProduct * Factory::FactorySimple(Goods type)
{
    /* 根据类型返回生产工厂 */
	IProduct * p = nullptr;
    switch (type)
    {
    case TYPE0:
        p = new ConcreteProduct1();
        break;
    case TYPE1:
        p = new ConcreteProduct2();
        break;
    default:
        std::cout << "unknown type" << std::endl;
        break;
    }
    return p;
}