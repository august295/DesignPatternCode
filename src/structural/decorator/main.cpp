#include <iostream>

#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

/**
 * 1. 装饰模式
 *      装饰是一种结构型设计模式，允许你通过将对象放入包含行为的特殊封装对象中来为原对象绑定新的行为。
 * 2. 模式结构
 *      Component：部件
 *      Concrete Component：具体部件
 *      Decorator：基础装饰类
 *      Concrete Decorators：具体装饰类
 */
int main()
{
	// 单个测试
	IComponent* pc1 = new ConcreteComponent();
	std::cout << pc1->Execute() << std::endl;

	// 组合测试
	IComponent* pc2 = new ConcreteDecoratorA(pc1);
	IComponent* pc3 = new ConcreteDecoratorB(pc2);
	std::cout << pc3->Execute() << std::endl;

	delete pc1;
	delete pc2;
	delete pc3;

    return 0;
}