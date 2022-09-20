#ifndef __OBSERVER_HEXADECIMAL_H__
#define __OBSERVER_HEXADECIMAL_H__

#include <iostream>

#include "observer.hpp"

class subject;

class observer_hexadecimal : public observer
{
public:
    observer_hexadecimal();
    virtual ~observer_hexadecimal();

    virtual void update(subject * sub); /* 观察目标改变调用该函数，观察者随之改变 */

private:
    std::string m_hex; /*十六进制 */
};

#endif