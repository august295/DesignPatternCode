#ifndef __BLACKBOARD_H__
#define __BLACKBOARD_H__

#include <string>
#include <map>
#include <list>

#include "Data.h"

class KnowledgeSource;
class BlackBoard
{
public:
	BlackBoard();
	~BlackBoard();

	void addks(KnowledgeSource * k);

	std::map<std::string, DataContent> inspect();
	void update(std::string key, DataContent data);

public:
	std::list<KnowledgeSource*> ksList;
	std::map<std::string, DataContent> dataMap;
};

#endif