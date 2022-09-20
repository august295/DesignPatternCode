#ifndef __INVOKER_H__
#define __INVOKER_H__

#include <queue>

#include "command.hpp"

class invoker
{
public:
    invoker();
    ~invoker();

    void set_command(command * cmd); /* 设置命令 */
    void exe_command();              /* 执行命令 */

private:
    std::queue<command *> m_command;
};

#endif