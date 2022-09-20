#include <iostream>

#include "command_open.h"
#include "command_shut.h"
#include "invoker.h"

/**
 * 1. 命令模式
 *      将一个请求封装为一个对象，从而使我们可用不同的请求对客户进行参数化；
 *      对请求排队或者记录请求日志，以及支持可撤销的操作。
 * 2. 场景
 *      大部分情况下，它被用于代替包含行为的参数化 UI 元素的回调函数，
 *      此外还被用于对任务进行排序和记录操作历史记录等。
 * 3. 模式结构
 *      Command: 抽象命令类
 *      ConcreteCommand: 具体命令类
 *      Invoker: 调用者
 *      Receiver: 接收者
 *      具体指令类关联接受者具体操作，调用者（内部可实现指令队列）执行具体指令类
 */
int main()
{
    invoker * invok = new invoker();

    /* 指令开 */
    command * cmd_open = new command_open(new receiver());
    /* 指令关 */
    command * cmd_shut = new command_shut(new receiver());

    /* 单个指令 */
    invok->set_command(cmd_open);
    invok->exe_command();
    std::cout << std::endl;
    /* 多个指令 */
    invok->set_command(cmd_open);
    invok->set_command(cmd_shut);
    invok->exe_command();

    return 0;
}