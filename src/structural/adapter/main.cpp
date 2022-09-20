#include <iostream>

#include "adaptor_queue.h"
#include "adaptor_stack.h"

/**
 * 1. 适配器模式
 *      Adapter模式主要应用于“希望复用一些现存的类，但是接口又与复用环境要求不一致的情况”，
 *      在遗留代码复用、类库迁移等方面非常有用
 * 2. 模式结构
 *      Target：目标抽象类
 *      Adaptor：适配器类
 *      Adaptee：适配者类
 * 3. 实例：将（队列）和（栈）利用（双端队列适配实现）
 *      target：Sequence
 *      adaptee：deque
 *      adaptor：queue stack
 */
int main()
{
    /* 双端队列适配的单向队列 */
    target * queue = new adaptor_queue();
    queue->push(1);
    queue->push(2);
    queue->push(3);
    queue->pop();
    queue->print();

    /* 双端队列适配的栈 */
    target * stack = new adaptor_stack();
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->pop();
    stack->print();

    return 0;
}