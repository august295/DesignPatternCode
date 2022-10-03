#ifndef __ITARGET_HPP__
#define __ITARGET_HPP__

class ITarget
{
public:
    ITarget(){};
    virtual ~ITarget(){};

	virtual void Request() = 0;
};

#endif