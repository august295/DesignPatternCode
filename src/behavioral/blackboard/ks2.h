#ifndef __KS2_H__
#define __KS2_H__

#include "knowledgesource.h"

class ks2 : public knowledgesource
{
public:
	ks2(std::string name, blackboard * b);
	~ks2();

	void executeAction();
	void executeCondition();
	void updateBlackboard();
};

#endif
