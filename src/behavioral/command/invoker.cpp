#include "invoker.h"

invoker::invoker()
{
}

invoker::~invoker()
{
}

void invoker::set_command(command * cmd)
{
    m_command.push(cmd);
}

void invoker::exe_command()
{
    while (!m_command.empty())
    {
        m_command.front()->execute();
        m_command.pop();
    }
}