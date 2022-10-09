#include "ConcreteColleagueB.h"

ConcreteColleagueB::ConcreteColleagueB()
{

}

ConcreteColleagueB::~ConcreteColleagueB()
{
}

void ConcreteColleagueB::SendMsg(int id, std::string msg)
{
	PPubMediator->Operation(id, msg);
}

void ConcreteColleagueB::ReceiveMsg(std::string msg)
{
	std::cout << "ConcreteColleagueB reveivemsg:" << msg << std::endl;
}