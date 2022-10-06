#include <iostream>
#include <vector>

#include "ConcreteHandlerA.h"
#include "ConcreteHandlerB.h"
#include "ConcreteHandlerC.h"

/**
 * 1. 责任链模式
 *      收到请求后，每个处理者均可对请求进行处理，或将其传递给链上的下个处理者。
 * 2. 模式结构
 *      IHandler: 处理者接口类
 *      Handler: 基础处理者类
 *      ConcreteHandler: 具体处理者类
 */
void ClientCode(IHandler &handler) {
	std::vector<std::string> requests = { "ConcreteHandlerA", "ConcreteHandlerB", "ConcreteHandlerC" };
	for (const std::string request : requests) {
		const std::string result = handler.Handle(request);
		if (!result.empty()) {
			std::cout << "  " << result << std::endl;
		}
		else {
			std::cout << "  " << request << " not response.\n";
		}
	}
}

int main()
{
	ConcreteHandlerA* pa = new ConcreteHandlerA();
	ConcreteHandlerB* pb = new ConcreteHandlerB();
	ConcreteHandlerC* pc = new ConcreteHandlerC();
	pa->SetNext(pb)->SetNext(pc);
	ClientCode(*pa);
	ClientCode(*pb);

	delete pa;
	delete pb;
	delete pc;

    return 0;
}