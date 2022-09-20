#include <iostream>

#include "Factory.h"

/**
 * 1. 一个工厂对应多个产品
 *      如果要创建的产品不多，只要一个工厂类就可以完成，这种模式叫“简单工厂模式”。
 *      在简单工厂模式中创建实例的方法通常为静态（static）方法，因此简单工厂模式又叫作静态工厂方法模式。
 */
int main()
{
    IProduct * p1 = Factory::FactorySimple(TYPE0);
	p1->ProductSomething();

	IProduct * p2 = Factory::FactorySimple(TYPE1);
	p2->ProductSomething();

    return 0;
}