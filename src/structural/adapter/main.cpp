#include <iostream>

#include "AdaptorA.h"
#include "AdaptorB.h"

/**
 * 1. 适配器模式
 *      Adapter模式主要应用于“希望复用一些现存的类，但是接口又与复用环境要求不一致的情况”，
 *      在遗留代码复用、类库迁移等方面非常有用
 * 2. 模式结构
 *      ITarget：目标抽象类
 *      Adaptor：适配器类
 *      Adaptee：适配者类
 */
int main()
{
	Adaptee* adaptee = new Adaptee();
    ITarget * a = new AdaptorA(adaptee);
	a->Request();

    ITarget * b = new AdaptorB(adaptee);
	b->Request();

    return 0;
}