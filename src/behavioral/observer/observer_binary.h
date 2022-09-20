#ifndef __OBSERVE_BINARY_H__
#define __OBSERVE_BINARY_H__

#include <iostream>

#include "observer.hpp"

class subject;

class observer_binary : public observer
{
public:
    observer_binary();
    virtual ~observer_binary();

    virtual void update(subject * sub); /* 观察目标改变调用该函数，观察者随之改变 */

private:
    std::string m_bin; /* 二进制 */
};

#endif