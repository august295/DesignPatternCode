#ifndef __ADAPTEE_H__
#define __ADAPTEE_H__

#include <deque>
#include <iostream>

/* 适配者：双端队列 */
class adaptee
{
public:
    adaptee();
    ~adaptee();

    void push_front(int num); /* 放在最前面 */
    void push_back(int num);  /* 放在最后面 */
    void pop_front();         /* 弹出最前面 */
    void pop_back();          /* 弹出最后面 */
    void print();             /* 打印信息 */

private:
    std::deque<int> m_deque;
};

#endif