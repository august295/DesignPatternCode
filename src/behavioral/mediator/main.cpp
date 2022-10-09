#include <iostream>

#include "ConcreteMediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"

/**
 * 1. 中介者模式
 *      中介者是一种行为设计模式，能让你减少对象之间混乱无序的依赖关系。
 *      该模式会限制对象之间的直接交互，迫使它们通过一个中介者对象进行合作。
 * 2. 模式结构
 *      Mediator: 抽象中介者
 *      ConcreteMediator: 具体中介者
 *      Colleague: 抽象同事类
 *      ConcreteColleague: 具体同事类
 */
int main()
{
	ConcreteColleagueA * pa = new ConcreteColleagueA();
	ConcreteColleagueB * pb = new ConcreteColleagueB();
	ConcreteMediator * pm = new ConcreteMediator();
	pm->Register(1, pa);
	pm->Register(2, pb);

	// sendmsg from a to b
	pa->SendMsg(2, "hello,i am a");
	// sendmsg from b to a
	pb->SendMsg(1, "hello,i am b");

	delete pa, pb, pm;

    return 0;
}