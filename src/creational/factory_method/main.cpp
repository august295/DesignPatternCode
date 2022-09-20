#include <iostream>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

/**
 * 1. 创建多个工厂，一个工厂生产一个对应的产品
 *      工厂方法模式的主要优点是增加新的产品类时无须修改现有系统，并封装了产品对象的创建细节，系统具有良好的灵活性和可扩展性；
 *      其缺点在于增加新产品的同时需要增加新的工厂，导致系统类的个数成对增加，在一定程度上增加了系统的复杂性
 */
int main()
{
    IFactory * f1 = new ConcreteFactory1();
	IProduct * p1 = f1->FactoryMethod();
	p1->ProductSomething();

    IFactory * f2 = new ConcreteFactory2();
	IProduct * p2 = f2->FactoryMethod();
	p2->ProductSomething();

    return 0;
}