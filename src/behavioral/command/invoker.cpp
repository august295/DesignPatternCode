#include "Invoker.h"

Invoker::Invoker()
{
}

Invoker::~Invoker()
{
}

void Invoker::SetCommand(ICommand * cmd)
{
    CommandQueue.push(cmd);
}

void Invoker::ExeCommand()
{
    while (!CommandQueue.empty())
    {
        CommandQueue.front()->Execute();
        CommandQueue.pop();
    }
}