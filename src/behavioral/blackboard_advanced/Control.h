#ifndef __CONTROL_H__
#define __CONTROL_H__

#include "BlackBoard.h"
#include "KnowledgeSource.h"

class Control
{
public:
	Control();
	~Control();

	Control(BlackBoard * b);

	void loop();
	void nextSource();

public:
	BlackBoard * _BlackBoard;
};

#endif
