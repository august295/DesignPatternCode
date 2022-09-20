#include "BlackBoard.h"

BlackBoard::BlackBoard()
{

}

BlackBoard::~BlackBoard()
{

}

void BlackBoard::addks(KnowledgeSource * k)
{
	ksList.push_back(k);
}

std::map<std::string, DataContent> BlackBoard::inspect()
{
	return dataMap;
}

void BlackBoard::update(std::string key, DataContent data)
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
