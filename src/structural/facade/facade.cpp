#include "facade.h"

facade::facade()
{
}

facade::~facade()
{
    delete m_sys_1;
    delete m_sys_2;
    delete m_sys_3;
}

facade::facade(system_1 * sys_1,
               system_2 * sys_2,
               system_3 * sys_3)
{
    m_sys_1 = sys_1;
    m_sys_2 = sys_2;
    m_sys_3 = sys_3;
}

void facade::operation()
{
    m_sys_1->operation_1();
    m_sys_2->operation_2();
    m_sys_3->operation_3();
}