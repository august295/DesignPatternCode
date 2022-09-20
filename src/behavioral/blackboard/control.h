#ifndef __CONTROL_H__
#define __CONTROL_H__

#include "blackboard.h"
#include "knowledgesource.h"

class control
{
public:
	control();
	~control();

	control(blackboard * b);

	void loop();
	void nextSource();

public:
	blackboard * _BlackBoard;
};

#endif
