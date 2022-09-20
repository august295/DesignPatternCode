#ifndef __KNOWLEDGESOURCE_H__
#define __KNOWLEDGESOURCE_H__

#include <string>

class blackboard;
class knowledgesource
{
public:
	knowledgesource(std::string name, blackboard * b)
	{
		_Name = name;
		_BlackBoard = b;
	};
	virtual ~knowledgesource() {};

	std::string GetName() { return _Name; }

	virtual void executeAction() = 0;
	virtual void executeCondition() = 0;
	virtual void updateBlackboard() = 0;

public:
	std::string _Name = "";
	blackboard * _BlackBoard = nullptr;
};

#endif
