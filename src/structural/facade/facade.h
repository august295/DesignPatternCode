#ifndef __FACADE_H__
#define __FACADE_H__

#include "system_1.h"
#include "system_2.h"
#include "system_3.h"

class facade
{
public:
    facade();
    ~facade();

    facade(system_1 * sys_1,
           system_2 * sys_2,
           system_3 * sys_3);

    void operation(); /* 组合模式 */

private:
    system_1 * m_sys_1;
    system_2 * m_sys_2;
    system_3 * m_sys_3;
};

#endif