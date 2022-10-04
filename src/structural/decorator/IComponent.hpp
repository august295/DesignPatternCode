#ifndef __ICOMPONENT_HPP__
#define __ICOMPONENT_HPP__

#include <string>

class IComponent
{
public:
	IComponent() {};
	virtual ~IComponent() {};

	virtual std::string Execute() = 0;
};

#endif
