#include <iostream>

#include "Proxy.h"

Proxy::Proxy()
{
	// ���˾��� Service ����Ĵ���Ӧ������ main ��ʵ�֣�����Ϊ Service Ӧ��
	// ���û���͸���ģ��û�����ԵĽӿڶ���ͨ������ģ��������������Ĵ��� 
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
