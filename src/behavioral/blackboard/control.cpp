#include "control.h"

control::control()
{

}

control::~control()
{

}

control::control(blackboard * b)
{
	_BlackBoard = b;
}

void control::loop()
{
	if (nullptr == _BlackBoard)
	{
		return;
	}
	nextSource();
}

void control::nextSource()
{
	for (auto ks : _BlackBoard->ksList)
	{
		ks->executeAction();
		ks->executeCondition();
	}
}

