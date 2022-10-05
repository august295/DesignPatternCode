#ifndef __ISERVICE_HPP__
#define __ISERVICE_HPP__

#include <string>

class IService
{
public:
	IService() {};
	virtual ~IService() {};

    virtual std::string Operation(const std::string& request) = 0;
};

#endif