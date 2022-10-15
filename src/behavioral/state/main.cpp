#include <iostream>

#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

/**
 * 1. 状态模式
 *      状态是一种行为设计模式，让你能在一个对象的内部状态变化时改变其行为，使其看上去就像改变了自身所属的类一样。
 * 2. 模式结构  
 *		Context: 环境类
 *		State: 抽象状态类
 *		ConcreteState: 具体状态类
 */
int main()
{
    
	Context* con = new Context(new ConcreteStateA());
	con->DoThis();
	con->DoThat();

	std::cout << "\n";
	con->DoThis();
	con->DoThat();

	delete con;

    return 0;
}