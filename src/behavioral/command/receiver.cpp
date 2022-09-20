#include "receiver.h"

receiver::receiver()
{
    m_state = false;
}

receiver::~receiver()
{
}

bool receiver::get_state()
{
    return m_state;
}

void receiver::shut()
{
    m_state = false;
}

void receiver::open()
{
    m_state = true;
}