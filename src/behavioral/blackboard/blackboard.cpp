#include "blackboard.h"

blackboard::blackboard()
{

}

blackboard::~blackboard()
{

}

void blackboard::addks(knowledgesource * k)
{
	ksList.push_back(k);
}

std::map<std::string, blackboardData> blackboard::inspect()
{
	return dataMap;
}

void blackboard::update(std::string key, blackboardData data)
{
	if (dataMap.count(key))
	{
		dataMap[key] = data;
	}
	else
	{
		dataMap.emplace(key, data);
	}
}
