#include "Control.h"

Control::Control()
{

}

Control::~Control()
{

}

Control::Control(BlackBoard * b)
{
	_BlackBoard = b;
}

void Control::loop()
{
	if (nullptr == _BlackBoard)
	{
		return;
	}
	nextSource();
}

void Control::nextSource()
{
	for (auto ks : _BlackBoard->ksList)
	{
		ks->executeAction();
		ks->executeCondition();
	}
}

