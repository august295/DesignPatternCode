#include <iostream>

#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

/**
 * 1. 桥接模式
 *      将抽象部分与它的实现部分分离，使它们都可以独立地变化。
 * 2. 模式结构
 *      Abstraction：抽象类
 *      RefinedAbstraction：扩充抽象类
 *      Implementor：实现类接口
 *      ConcreteImplementor：具体实现类
 */
int main()
{
	Abstraction * pa = new RefinedAbstraction(new ConcreteImplementorA());
	pa->Operation();

	Abstraction * pb = new RefinedAbstraction(new ConcreteImplementorB());
	pb->Operation();

	delete pa;
	delete pb;

    return 0;
}