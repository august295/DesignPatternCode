#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "IComponent.hpp"

class Decorator : public IComponent
{
public:
	Decorator(IComponent* pCom);
	virtual ~Decorator();

	std::string Execute() override;

private:
	IComponent* PPriCom;
};

#endif