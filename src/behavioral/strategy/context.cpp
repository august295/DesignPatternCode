#include "context.h"

context::context()
{
}

context::~context()
{
}

context::context(strategy * str)
{
    m_strategy = str;
}

void context::set_strategy(strategy * str)
{
    m_strategy = str;
}

strategy * context::get_strategy()
{
    return m_strategy;
}

void context::do_algorithm(int num)
{
    m_strategy->algorithm(num);
}