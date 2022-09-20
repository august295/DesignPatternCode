#ifndef __KS1_H__
#define __KS1_H__

#include "KnowledgeSource.h"

class ks1 : public KnowledgeSource
{
public:
	ks1(std::string name, BlackBoard * blackBoard, std::set<uint32_t> subscribeSet);
	~ks1();

	void executeAction();
	void executeCondition();
	void updateBlackboard(const DataContent & dataContent);
};

#endif
