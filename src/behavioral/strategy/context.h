#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "strategy.hpp"

class context
{
public:
    context();
    ~context();

    context(strategy * str);                 /* 有参构造 */
    void       set_strategy(strategy * str); /* 设置策略  */
    strategy * get_strategy();               /* 获取策略 */
    void       do_algorithm(int num);        /* 执行策略 */

private:
    strategy * m_strategy;
};

#endif