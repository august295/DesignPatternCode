#ifndef __PROTOTYPR_HPP__
#define __PROTOTYPR_HPP__

class Prototype
{
public:
    Prototype(){};
    virtual ~Prototype(){};

	/* 关键原型模式函数，复制自身 */
    virtual Prototype * Clone() = 0;
};

#endif