#ifndef __IMEDIATOR_HPP__
#define __IMEDIATOR_HPP__

#include <map>

#include "IColleague.hpp"

class IMediator
{
public:
	IMediator(){};
    virtual ~IMediator(){};

	void Register(int id, IColleague * colleague) 
	{ 
		if (PubColleagueMap.find(id) == PubColleagueMap.end())
		{
			PubColleagueMap.emplace(id, colleague);
			// 同时将中介类暴露给 colleague 
			colleague->SetMediator(this);
		}
	}

    virtual void Operation(int id, std::string msg) = 0;

public:
	std::map<int, IColleague*> PubColleagueMap;
};

#endif