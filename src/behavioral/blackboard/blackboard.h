#ifndef __BLACKBOARD_H__
#define __BLACKBOARD_H__

#include <string>
#include <map>
#include <list>
#include <cstdint>

struct blackboardData
{
	void* data;
	uint32_t len;
};

class knowledgesource;
class blackboard
{
public:
	blackboard();
	~blackboard();

	void addks(knowledgesource * k);

	std::map<std::string, blackboardData> inspect();
	void update(std::string key, blackboardData data);

public:
	std::list<knowledgesource*> ksList;
	std::map<std::string, blackboardData> dataMap;
};

#endif