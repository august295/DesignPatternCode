#ifndef __HANDLER_H__
#define __HANDLER_H__

#include "IHandler.hpp"

class Handler : public IHandler
{
public:
    Handler();
    virtual ~Handler();

	virtual IHandler *SetNext(IHandler *handler) override;
	virtual std::string Handle(std::string request) override;

private:
    IHandler * PPriNextHandler;
};

#endif