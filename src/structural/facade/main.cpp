#include "facade.h"

/**
 * 1. 外观模式
 *      外部与一个子系统的通信必须通过一个统一的外观对象进行，
 *      为子系统中的一组接口提供一个一致的界面，外观模式定义了一个高层接口，
 *      这个接口使得这一子系统更加容易使用。   
 * 2. 模式结构
 *      Facade: 外观角色
 *      SubSystem:子系统角色
 */
int main()
{
    facade * fac = new facade(
        new system_1(),
        new system_2(),
        new system_3());

    fac->operation();

    return 0;
}