#ifndef __CONCRETECOLLEAGUEB_H__
#define __CONCRETECOLLEAGUEB_H__

#include "IColleague.hpp"
#include "IMediator.hpp"

class ConcreteColleagueB : public IColleague
{
public:
	ConcreteColleagueB();
	~ConcreteColleagueB();

	void SendMsg(int id, std::string msg) override;
	void ReceiveMsg(std::string msg) override;
};

#endif