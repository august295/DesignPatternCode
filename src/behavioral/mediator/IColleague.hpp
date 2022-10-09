#ifndef __ICOLLEAGUE_HPP__
#define __ICOLLEAGUE_HPP__

#include <iostream>
#include <string>

class IMediator;

class IColleague
{
public:
	IColleague(){};
    virtual ~IColleague(){};

	void SetMediator(IMediator* mediator) { PPubMediator = mediator; };
    virtual void ReceiveMsg(std::string msg) = 0;
	virtual void SendMsg(int id, std::string msg) = 0;

public:
	IMediator* PPubMediator;
};

#endif