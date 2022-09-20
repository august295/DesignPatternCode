#ifndef __KS2_H__
#define __KS2_H__

#include "KnowledgeSource.h"

class ks2 : public KnowledgeSource
{
public:
	ks2(std::string name, BlackBoard * blackBoard, std::set<uint32_t> subscribeSet);
	~ks2();

	void executeAction();
	void executeCondition();
	void updateBlackboard(const DataContent & dataContent);
};

#endif
