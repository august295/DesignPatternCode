#ifndef __SUBJECT_HPP__
#define __SUBJECT_HPP__

#include "observer.hpp"

/* 抽象目标 */
class subject
{
public:
    subject() {};
    virtual ~subject() {};

    /* 观察模式观察目标的三个关键函数 */
    virtual void attach(observer * obs) = 0; /* 添加观察者，观察其变化 */
    virtual void detach(observer * obs) = 0; /* 移出观察者 */
    virtual void notify()               = 0; /* 通知目标发生变化 */
};

#endif