#include "Composite.h"

Composite::Composite()
{

}

Composite::~Composite()
{

}

bool Composite::IsComposite()
{
	return true;
}

void Composite::Add(IComponent* pCom)
{
	PriComList.push_back(pCom);
	pCom->SetParent(this);
}

void Composite::Remove(IComponent* pCom)
{
	PriComList.remove(pCom);
	pCom->SetParent(nullptr);
}

std::string Composite::Execute()
{
	std::string result;
	for (auto com : PriComList)
	{
		if (com == PriComList.back())
		{
			result += com->Execute();
		}
		else
		{
			result += com->Execute() + "+";
		}
	}
	return "Branch(" + result + ")";
}
