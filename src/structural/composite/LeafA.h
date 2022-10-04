#ifndef __LEAFA_H__
#define __LEAFA_H__

#include "IComponent.hpp"

class LeafA : public IComponent
{
public:
	LeafA();
    ~LeafA();

	std::string Execute() override;
};

#endif