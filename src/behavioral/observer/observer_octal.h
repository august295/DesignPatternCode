#ifndef __OBSERVE_OCTAL_H__
#define __OBSERVE_OCTAL_H__

#include <iostream>

#include "observer.hpp"

class subject;

class observer_octal : public observer
{
public:
    observer_octal();
    virtual ~observer_octal();

    virtual void update(subject * sub); /* 观察目标改变调用该函数，观察者随之改变 */

private:
    std::string m_oct; /* 八进制 */
};

#endif