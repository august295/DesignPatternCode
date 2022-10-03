#ifndef __ADAPTORA_H__
#define __ADAPTORA_H__

#include "Adaptee.h"
#include "ITarget.hpp"

class AdaptorA : public ITarget
{
public:
    AdaptorA(Adaptee * adaptee);
    virtual ~AdaptorA();

	virtual void Request() override;

private:
	Adaptee* PriAdaptee;
};

#endif