#include <iostream>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

/**
 * 1. 创建多个工厂，多个组件，每个工厂都可以各类组件组合
 *      每次可以通过具体工厂类创建一个产品族中的多个对象，增加或者替换产品族比较方便，增加新的具体工厂和产品族很方便；
 *      主要缺点在于增加新的产品等级结构很复杂，需要修改抽象工厂和所有的具体工厂类
 */
int main()
{
	IFactory * f1 = new ConcreteFactory1();
	IProductA * pa1 = f1->CreateProductA();
	IProductB * pb1 = f1->CreateProductB();
	pa1->ProductA();
	pb1->ProductB();

	IFactory * f2 = new ConcreteFactory2();
	IProductA * pa2 = f2->CreateProductA();
	IProductB * pb2 = f2->CreateProductB();
	pa2->ProductA();
	pb2->ProductB();

	return 0;
}