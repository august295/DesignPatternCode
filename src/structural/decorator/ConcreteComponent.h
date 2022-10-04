#ifndef __CONCRETECOMPONENT_H__
#define __CONCRETECOMPONENT_H__

#include "IComponent.hpp"

class ConcreteComponent : public IComponent
{
public:
	ConcreteComponent();
    ~ConcreteComponent();

	std::string Execute() override;
};

#endif