#include "Decorator.h"

Decorator::Decorator(IComponent* pCom)
	: PPriCom(pCom)
{

}

Decorator::~Decorator()
{

}

std::string Decorator::Execute()
{
	return PPriCom->Execute();
}
