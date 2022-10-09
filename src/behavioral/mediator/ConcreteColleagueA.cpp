#include "ConcreteColleagueA.h"

ConcreteColleagueA::ConcreteColleagueA()
{

}

ConcreteColleagueA::~ConcreteColleagueA()
{
}

void ConcreteColleagueA::SendMsg(int id, std::string msg)
{
	PPubMediator->Operation(id, msg);
}

void ConcreteColleagueA::ReceiveMsg(std::string msg)
{
	std::cout << "ConcreteColleagueA reveivemsg:" << msg << std::endl;
}