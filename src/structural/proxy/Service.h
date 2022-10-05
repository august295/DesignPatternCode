#ifndef __SERVICE_H__
#define __SERVICE_H__

#include "IService.hpp"

class Service : public IService
{
public:
	Service();
    ~Service();

    std::string Operation(const std::string& request) override;
};

#endif