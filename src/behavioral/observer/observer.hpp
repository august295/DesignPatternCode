#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__

class subject;

class observer
{
public:
    observer(){};
    virtual ~observer(){};

    /* 更新目标对象信息 */
    virtual void update(subject * sub) = 0;
};

#endif