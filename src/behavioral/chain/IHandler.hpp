#ifndef __IHANDLER_HPP__
#define __IHANDLER_HPP__

#include <string>

class IHandler
{
public:
    IHandler(){};
    virtual ~IHandler(){};

	virtual IHandler *SetNext(IHandler *handler) = 0;
	virtual std::string Handle(std::string request) = 0;
};

#endif