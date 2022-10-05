#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "Flyweight.h"
#include "FlyweightFactory.h"

struct UniqueState
{
	int AxisX;
	int AxisY;

	UniqueState(int x, int y)
		: AxisX(x)
		, AxisY(y)
	{
	}

	friend std::ostream &operator<<(std::ostream &os, const UniqueState &us)
	{
		return os << "(UniqueState [ " << us.AxisX << " , " << us.AxisY << " ])";
	}
};

class Context
{
public:
	Context();
	Context(const SharedState &sharedState, const UniqueState &uniqueState);
    ~Context();

	Flyweight* GetFlyweight();
    void Operation();

private:
	Flyweight* PPriFlyweight;
	UniqueState* PPriUniqueState;
};

#endif