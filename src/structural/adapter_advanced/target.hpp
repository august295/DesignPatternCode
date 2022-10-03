#ifndef __TARGET_H__
#define __TARGET_H__

/* 目标抽象类：顺序容器 */
class target
{
public:
    target(){};
    virtual ~target(){};

    virtual void push(int num) = 0; /* 放入 */
    virtual void pop()         = 0; /* 弹出 */
    virtual void print()       = 0; /* 打印*/
};

#endif