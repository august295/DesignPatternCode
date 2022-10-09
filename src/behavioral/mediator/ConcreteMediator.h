#ifndef __CONCRETEMEDIATOR_H__
#define __CONCRETEMEDIATOR_H__

#include "IMediator.hpp"

class ConcreteMediator : public IMediator
{
public:
	ConcreteMediator();
	~ConcreteMediator();

	void Operation(int id, std::string msg) override;
};

#endif