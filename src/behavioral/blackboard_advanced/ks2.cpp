#include <iostream>

#include "ks2.h"
#include "BlackBoard.h"

ks2::ks2(std::string name, BlackBoard * blackBoard, std::set<uint32_t> subscribeSet)
	: KnowledgeSource(name, blackBoard, subscribeSet)
{

}

ks2::~ks2()
{

}

void ks2::executeAction()
{

}

void ks2::executeCondition()
{

}

void ks2::updateBlackboard(const DataContent & dataContent)
{
	_BlackBoard->dataMap[_Name] = dataContent;
}
