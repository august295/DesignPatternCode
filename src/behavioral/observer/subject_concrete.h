#ifndef __SUBJECT_CONCRETE_H__
#define __SUBJECT_CONCRETE_H__

#include <list>

#include "subject.hpp"

class subject_concrete : public subject
{
public:
    subject_concrete();
    virtual ~subject_concrete();

    subject_concrete(int decimal); /* 初始化数据 */
    void set_decimal(int decimal); /* 设置数据 */
    int  get_decimal();            /* 获取数据 */

    virtual void attach(observer * obs); /* 添加观察者，观察其变化 */
    virtual void detach(observer * obs); /* 移出观察者 */
    virtual void notify();               /* 通知目标发生变化 */

private:
    int                   m_decimal;      /* 十进制 */
    std::list<observer *> m_list_observe; /* 观察者链表 */
};

#endif