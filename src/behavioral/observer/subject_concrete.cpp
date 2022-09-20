#include "subject_concrete.h"

subject_concrete::subject_concrete()
{
}

subject_concrete::~subject_concrete()
{
}

subject_concrete::subject_concrete(int decimal)
{
    m_decimal =  decimal;
}

void subject_concrete::set_decimal(int decimal)
{
    m_decimal = decimal;
}

int subject_concrete::get_decimal()
{
    return m_decimal;
}

void subject_concrete::attach(observer * obs)
{
    m_list_observe.push_back(obs);
}

void subject_concrete::detach(observer * obs)
{
    m_list_observe.remove(obs);
}

void subject_concrete::notify()
{
    for (const auto & obs : m_list_observe)
    {
        obs->update(this);
    }
}