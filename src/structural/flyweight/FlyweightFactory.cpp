#include <iostream>

#include "FlyweightFactory.h"

FlyweightFactory* FlyweightFactory::GetInstance()
{
	static FlyweightFactory flyweightFactory;
	return &flyweightFactory;
}

FlyweightFactory::FlyweightFactory()
{

}

FlyweightFactory::~FlyweightFactory()
{
	for (auto& flyweight : FlyweightMap)
	{
		delete flyweight.second;
	}
	FlyweightMap.clear();
}

std::string FlyweightFactory::GetKey(const SharedState& sharedState)
{
	return sharedState.Model + "_" + sharedState.Color;
}

Flyweight* FlyweightFactory::GetFlyweight(const SharedState& sharedState)
{
	auto key = GetKey(sharedState);
	auto flyweight = FlyweightMap.find(key);
	if (flyweight == FlyweightMap.end())
	{
		std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
		FlyweightMap.emplace(key, new Flyweight(sharedState));
	}
	else
	{
		std::cout << "FlyweightFactory: Reusing existing flyweight [" << key << "]\n";
	}
	return FlyweightMap[key];
}
