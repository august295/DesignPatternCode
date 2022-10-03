#ifndef __ADAPTORB_H__
#define __ADAPTORB_H__

#include "Adaptee.h"
#include "ITarget.hpp"

class AdaptorB : public ITarget
{
public:
    AdaptorB(Adaptee * adaptee);
    virtual ~AdaptorB();

	virtual void Request() override;

private:
    Adaptee * PriAdaptee;
};

#endif