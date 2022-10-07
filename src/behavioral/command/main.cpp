#include <iostream>

#include "CommandOpen.h"
#include "CommandShut.h"
#include "Invoker.h"

/**
 * 1. 命令模式
 *      将一个请求封装为一个对象，从而使我们可用不同的请求对客户进行参数化；
 *      对请求排队或者记录请求日志，以及支持可撤销的操作。
 * 2. 场景
 *      大部分情况下，它被用于代替包含行为的参数化 UI 元素的回调函数，
 *      此外还被用于对任务进行排序和记录操作历史记录等。
 * 3. 模式结构
 *      ICommand: 抽象命令类
 *      ConcreteCommand: 具体命令类
 *      Invoker: 调用者
 *      Receiver: 接收者
 *      具体指令类关联接受者具体操作，调用者（内部可实现指令队列）执行具体指令类
 */
int main()
{
	std::shared_ptr<Receiver> ptrReceiver = std::make_shared<Receiver>();
    Invoker * invoker = new Invoker();

    /* 指令开 */
    ICommand * cmdOpen = new CommandOpen(ptrReceiver);
    /* 指令关 */
    ICommand * cmdShut = new CommandShut(ptrReceiver);

    /* 单个指令 */
	invoker->SetCommand(cmdOpen);
	invoker->ExeCommand();
    std::cout << std::endl;
    /* 多个指令 */
	invoker->SetCommand(cmdOpen);
	invoker->SetCommand(cmdShut);
	invoker->ExeCommand();

	delete cmdOpen;
	delete cmdShut;
	delete invoker;

    return 0;
}