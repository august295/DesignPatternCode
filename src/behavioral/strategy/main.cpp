#include <iostream>

#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

/**
 * 1. 策略模式
 *      在策略模式中定义了一系列算法，将每一个算法封装起来，并让它们可以相互替换。
 *      策略模式让算法独立于使用它的客户而变化，也称为政策模式。
 * 2. 模式结构
 *      Context: 环境类
 *      IStrategy: 抽象策略类
 *      ConcreteStrategy: 具体策略类
 */
int main()
{
	std::vector<int> vec = { 1,3,5,7,2,4,6,8 };
	Context* context = new Context();
	// 策略
	context->SetStrategy(std::make_unique<ConcreteStrategyA>());
	context->DoSomething(vec);
	context->SetStrategy(std::make_unique<ConcreteStrategyB>());
	context->DoSomething(vec);

    return 0;
}