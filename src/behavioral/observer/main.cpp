#include <iostream>

#include "observer_binary.h"
#include "observer_hexadecimal.h"
#include "observer_octal.h"
#include "subject_concrete.h"

/**
 * 1. 观察者模式
 *      观察者模式(Observer Pattern)：定义对象间的一种一对多依赖关系，使得每当一个对象状态发生改变时，其相关依赖对象皆得到通知并被自动更新。
 *      观察者模式又叫做发布-订阅（Publish/Subscribe）模式、模型-视图（Model/View）模式、源-监听器（Source/Listener）模式或从属者（Dependents）模式。
 * 2. 抽象目标
 *      attach()
 *      detach()
 *      notify()
 * 3. 抽象观察者
 *      update()
 */
int main()
{
    /* 全部创建 */
	subject_concrete * sub = new subject_concrete(25);
    observer * bin = new observer_binary();
    observer * oct = new observer_octal();
    observer * hex = new observer_hexadecimal();
    sub->attach(bin);
    sub->attach(oct);
    sub->attach(hex);
    sub->notify();

    /* 移出一个观察者，并修改数据 */
    sub->detach(bin);
    sub->set_decimal(20);
    sub->notify();

	delete bin;
	delete oct;
	delete hex;
	delete sub;

    return 0;
}