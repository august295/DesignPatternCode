#include <iostream>

#include "ks2.h"
#include "blackboard.h"

ks2::ks2(std::string name, blackboard * b)
	: knowledgesource(name, b)
{

}

ks2::~ks2()
{

}

void ks2::executeAction()
{
	std::cout << _BlackBoard->dataMap[_Name].len << std::endl;
}

void ks2::executeCondition()
{
	if (_BlackBoard->dataMap.count("ks1"))
	{
		_BlackBoard->dataMap["ks1"].len = _BlackBoard->dataMap["ks1"].len * 2;
		std::cout << _BlackBoard->dataMap["ks1"].len << std::endl;
	}
}

void ks2::updateBlackboard()
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
