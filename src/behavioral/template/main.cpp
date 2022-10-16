#include <iostream>

#include "ConcreteTemplateA.h"
#include "ConcreteTemplateB.h"
#include "ConcreteTemplateC.h"

/**
 * 1. 模板方法模式
 *      模板方法是一种行为设计模式，它在超类中定义了一个算法的框架，
 *      允许子类在不修改结构的情况下重写算法的特定步骤。
 * 2. 模式结构
 *      AbstractClass: 抽象类
 *      ConcreteClass: 具体类
 */
int main()
{
	ITemplate* t1 = new ConcreteTemplateA();
	t1->Mine("data.doc");
	ITemplate* t2 = new ConcreteTemplateB();
	t2->Mine("data.csv");
	ITemplate* t3 = new ConcreteTemplateC();
	t3->Mine("data.pdf");

	delete t1;
	delete t2;
	delete t3;

    return 0;
}