#include <iostream>

#include "ks1.h"
#include "blackboard.h"

ks1::ks1(std::string name, blackboard * b)
	: knowledgesource(name, b)
{

}

ks1::~ks1()
{

}

void ks1::executeAction()
{
	std::cout << _BlackBoard->dataMap[_Name].len << std::endl;
}

void ks1::executeCondition()
{
	if (_BlackBoard->dataMap.count("ks2"))
	{
		_BlackBoard->dataMap["ks2"].len = _BlackBoard->dataMap["ks2"].len * 3;
		std::cout << _BlackBoard->dataMap["ks2"].len << std::endl;
	}
}

void ks1::updateBlackboard()
{
	if (!_BlackBoard->dataMap.count(_Name))
	{
		blackboardData b;
		b.len = 0;
		_BlackBoard->update(_Name, b);
	}
	else
	{
		_BlackBoard->dataMap[_Name].len++;
	}
}
