#include <iostream>

#include "Prototype.hpp"
#include "ConcretePrototype.h"
#include "SubClassPrototype.h"

/**
 * 1. 原型模式
 *      原型模式实现的是一个 Clone 接口，注意是接口，也就是基于多态的 Clone 虚函数。
 *      也就是说原型模式能够通过基类指针来复制派生类对象。拷贝构造函数完不成这样的任务。
 *      在继承场景下，Clone 函数可以定义为虚函数。
 */
int main()
{
	ComplexClass1* c1 = new ComplexClass1();
	c1->SetStr("123");
	ComplexClass1* c11 = new ComplexClass1();
	c11->SetStr("456");

	/* 深拷贝，修改数据不影响原来对象 */
	ConcretePrototype * p1 = new ConcretePrototype(c1);
	ConcretePrototype * p2 = static_cast<ConcretePrototype*>(p1->Clone());
	p2->SetPriComplexClass1(c11);
	p1->Show();
	p2->Show();

	/* 再继承 */
	ComplexClass2* c2 = new ComplexClass2();
	c2->SetStr("789");
	SubClassPrototype * s1 = new SubClassPrototype(c1, c2);
	SubClassPrototype * s2 = static_cast<SubClassPrototype*>(s1->Clone());
	s1->Show();
	s2->Show();

    return 0;
}