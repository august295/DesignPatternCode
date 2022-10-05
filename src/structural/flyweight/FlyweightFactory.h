#ifndef __FLYWEIGHTFACTORY_H__
#define __FLYWEIGHTFACTORY_H__

#include <map>

#include "Flyweight.h"

class FlyweightFactory
{
public:
	static FlyweightFactory* GetInstance();

	std::string GetKey(const SharedState& sharedState);
	Flyweight* GetFlyweight(const SharedState& sharedState);

private:
	FlyweightFactory();
    ~FlyweightFactory();

private:
	std::map<std::string, Flyweight*> FlyweightMap;
};

#endif