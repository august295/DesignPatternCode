#include "command_open.h"

command_open::command_open()
{
}

command_open::~command_open()
{
}

command_open::command_open(receiver * rec)
{
    m_receiver = rec;
}

void command_open::set_receiver(receiver * rec)
{
    m_receiver = rec;
}

void command_open::execute()
{
    std::cout << "deal with open" << std::endl;
    m_receiver->open();
    std::cout << (m_receiver->get_state() ? "open" : "shut") << std::endl;
}