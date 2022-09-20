#include <iostream>

#include "context.h"
#include "strategy_hex.h"
#include "strategy_oct.h"

/**
 * 1. 策略模式
 *      在策略模式中定义了一系列算法，将每一个算法封装起来，并让它们可以相互替换。
 *      策略模式让算法独立于使用它的客户而变化，也称为政策模式。
 * 2. 模式结构
 *      Context: 环境类
 *      Strategy: 抽象策略类
 *      ConcreteStrategy: 具体策略类
 */
int main()
{
    /* 直接创建策略 */
    context * con = new context(new strategy_oct());
    con->do_algorithm(30);

    /* 设置策略 */
    strategy * str = new strategy_hex();
    con->set_strategy(str);
    con->do_algorithm(30);

    return 0;
}