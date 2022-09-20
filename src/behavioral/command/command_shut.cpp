#include "command_shut.h"

command_shut::command_shut()
{
}

command_shut::~command_shut()
{
}

command_shut::command_shut(receiver * rec)
{
    m_receiver = rec;
}

void command_shut::set_receiver(receiver * rec)
{
    m_receiver = rec;
}

void command_shut::execute()
{
    std::cout << "deal with shutdown" << std::endl;
    m_receiver->shut();
    std::cout << (m_receiver->get_state() ? "open" : "shut") << std::endl;
}