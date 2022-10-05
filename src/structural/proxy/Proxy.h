#ifndef __PROXY_H__
#define __PROXY_H__

#include <map>

#include "IService.hpp"
#include "Service.h"

class Proxy : public IService
{
public:
    Proxy();
    ~Proxy();

	bool CheckAccess(const std::string & request);
    std::string Operation(const std::string & request) override;

private:
	Service* PPriService;
	std::map<std::string, std::string> ResponseMap;
};

#endif