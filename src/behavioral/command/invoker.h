#ifndef __INVOKER_H__
#define __INVOKER_H__

#include <queue>

#include "ICommand.hpp"

class Invoker
{
public:
    Invoker();
    ~Invoker();

    void SetCommand(ICommand * cmd); /* 设置命令 */
    void ExeCommand();              /* 执行命令 */

private:
    std::queue<ICommand *> CommandQueue;
};

#endif