#include <iostream>

#include "Proxy.h"

Proxy::Proxy()
{
	// 有人觉得 Service 对象的创建应该是在 main 中实现；我认为 Service 应该
	// 对用户是透明的，用户所面对的接口都是通过代理的；这样才是真正的代理； 
	PPriService = new Service();
}

Proxy::~Proxy()
{
	delete PPriService;
	PPriService = nullptr;
}

bool Proxy::CheckAccess(const std::string & request)
{
	if (ResponseMap.count(request))
	{
		return false;
	}
	return true;
}

std::string Proxy::Operation(const std::string & request)
{
	if (CheckAccess(request))
	{
		std::string response = PPriService->Operation(request);
		ResponseMap.emplace(request, response);
		std::cout << "Cache does not exist, request server." << std::endl;
		return response;
	}
	else
	{
		std::cout << "Cache exists, display cache." << std::endl;
		return ResponseMap[request];
	}
}
