#ifndef __CONCRETECOLLEAGUEA_H__
#define __CONCRETECOLLEAGUEA_H__

#include "IColleague.hpp"
#include "IMediator.hpp"

class ConcreteColleagueA : public IColleague
{
public:
	ConcreteColleagueA();
    ~ConcreteColleagueA();

    void SendMsg(int id, std::string msg) override;
	void ReceiveMsg(std::string msg) override;
};

#endif