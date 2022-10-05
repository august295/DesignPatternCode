#ifndef __FLYWEIGHT_H__
#define __FLYWEIGHT_H__

#include <iostream>
#include <string>

struct SharedState
{
	std::string Model;
	std::string Color;

	SharedState(const std::string &model, const std::string &color)
		: Model(model)
		, Color(color)
	{
	}

	friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
	{
		return os << "(SharedState [ " << ss.Model << " , " << ss.Color << " ])";
	}
};

class Flyweight
{
public:
    Flyweight();
	Flyweight(const SharedState &sharedState);
    ~Flyweight();

    void Operation();

private:
	SharedState* PPriSharedState;
};

#endif