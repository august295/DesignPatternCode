#include "Handler.h"

Handler::Handler()
{
	PPriNextHandler = nullptr;
}

Handler::~Handler()
{
}

IHandler * Handler::SetNext(IHandler *handler)
{
	PPriNextHandler = handler;
	return handler;
}

std::string Handler::Handle(std::string request)
{
	if (PPriNextHandler)
	{
		return PPriNextHandler->Handle(request);
	}
	return "";
}
