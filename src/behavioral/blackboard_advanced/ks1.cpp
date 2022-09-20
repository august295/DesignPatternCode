#include <iostream>

#include "ks1.h"
#include "BlackBoard.h"

ks1::ks1(std::string name, BlackBoard * blackBoard, std::set<uint32_t> subscribeSet)
	: KnowledgeSource(name, blackBoard, subscribeSet)
{

}

ks1::~ks1()
{

}

void ks1::executeAction()
{
	
}

void ks1::executeCondition()
{

}

void ks1::updateBlackboard(const DataContent & dataContent)
{
	_BlackBoard->dataMap[_Name] = dataContent;
}
