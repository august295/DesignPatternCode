#ifndef __LEAFB_H__
#define __LEAFB_H__

#include "IComponent.hpp"

class LeafB : public IComponent
{
public:
	LeafB();
	~LeafB();

	std::string Execute() override;
};

#endif