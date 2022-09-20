#ifndef __KS1_H__
#define __KS1_H__

#include "knowledgesource.h"

class ks1 : public knowledgesource
{
public:
	ks1(std::string name, blackboard * b);
	~ks1();

	void executeAction();
	void executeCondition();
	void updateBlackboard();
};

#endif
