#include "ConcreteMediator.h"

ConcreteMediator::ConcreteMediator()
{
}

ConcreteMediator::~ConcreteMediator()
{
}

void ConcreteMediator::Operation(int id, std::string msg)
{
	auto it = PubColleagueMap.find(id);
	if (it == PubColleagueMap.end())
	{
		std::cout << "not found this colleague!" << std::endl;
		return;
	}
	it->second->ReceiveMsg(msg);
}
