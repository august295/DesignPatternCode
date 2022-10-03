#ifndef __ADAPTOR_STACK_H__
#define __ADAPTOR_STACK_H__

#include "adaptee.h"
#include "target.hpp"

/* 具体适配器：栈，先进后出 */
class adaptor_stack : public target
{
public:
    adaptor_stack();
    virtual ~adaptor_stack();

    virtual void push(int x);
    virtual void pop();
    virtual void print();

private:
    adaptee * m_adaptee;
};

#endif