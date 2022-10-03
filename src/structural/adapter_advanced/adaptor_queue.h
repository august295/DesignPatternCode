#ifndef __ADAPTOR_QUEUE_H__
#define __ADAPTOR_QUEUE_H__

#include "adaptee.h"
#include "target.hpp"

/* 具体适配器：队列，先进先出 */
class adaptor_queue : public target
{
public:
    adaptor_queue();
    virtual ~adaptor_queue();

    virtual void push(int x);
    virtual void pop();
    virtual void print();

private:
    adaptee * m_adaptee;
};

#endif