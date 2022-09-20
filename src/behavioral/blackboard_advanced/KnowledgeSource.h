#ifndef __KNOWLEDGESOURCE_H__
#define __KNOWLEDGESOURCE_H__

#include <string>
#include <set>

#include "data.h"

class BlackBoard;
class KnowledgeSource
{
public:
	KnowledgeSource(std::string name, BlackBoard * BlackBoard, std::set<uint32_t> subscribeSet)
	{
		_Name = name;
		_BlackBoard = BlackBoard;
		_SubscribeSet = subscribeSet;
	};
	virtual ~KnowledgeSource() {};

	std::string GetName() { return _Name; }

	virtual void executeAction() = 0;
	virtual void executeCondition() = 0;
	virtual void updateBlackboard(const DataContent & dataContent) = 0;

public:
	std::string _Name = "";
	BlackBoard * _BlackBoard = nullptr;
	std::set<uint32_t> _SubscribeSet;
};

#endif
