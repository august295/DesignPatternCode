#include <iostream>
#include <vector>

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"

/**
 * 1. 访问者模式
 *      访问者是一种行为设计模式，它能将算法与其所作用的对象隔离开来。
 * 2. 模式结构
 *      AbstractClass: 抽象类
 *      ConcreteClass: 具体类
 */
int main()
{
	std::vector<IElement*> elements = { new ConcreteElementA(), new ConcreteElementB() };
	ConcreteVisitor1* visitor1 = new ConcreteVisitor1();
	for (IElement* element : elements)
	{
		element->Accept(visitor1);
	}

	ConcreteVisitor2* visitor2 = new ConcreteVisitor2();
	for (IElement* element : elements)
	{
		element->Accept(visitor2);
	}


	for (IElement* element : elements)
	{
		delete element;
	}
	delete visitor1;
	delete visitor2;

    return 0;
}