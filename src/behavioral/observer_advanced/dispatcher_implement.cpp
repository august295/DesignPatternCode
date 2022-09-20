#include "dispatcher_implement.h"

/**
 * @brief 接收者接口
 */
ReciverInterface::ReciverInterface()
{
}

ReciverInterface::~ReciverInterface()
{
}

size_t ReciverInterface::GetPacketNum()
{
	return pri_type_set.size();
}

void ReciverInterface::InsertPacketType(uint32_t type)
{
	if (pri_type_set.count(type))
	{
		return;
	}
	pri_type_set.insert(type);
}

void ReciverInterface::ErasePacketType(uint32_t type)
{
	pri_type_set.erase(type);
}

bool ReciverInterface::NeedPacket(uint32_t type)
{
	if (0 == pri_type_set.size())
	{
		return true;
	}
	if (pri_type_set.count(type))
	{
		return true;
	}
	return false;
}

/**
 * @brief 分发者接口
 */
DispatcherInterface::DispatcherInterface()
{
}

DispatcherInterface::~DispatcherInterface()
{
}

std::shared_ptr<DispatcherImplement> DispatcherInterface::pri_instance = nullptr;
DispatcherInterface *                DispatcherInterface::GetInstance()
{
	if (pri_instance == nullptr)
	{
		pri_instance = std::make_shared<DispatcherImplement>();
	}
	return pri_instance.get();
}

/**
 * @brief 分发者具体实现
 */
DispatcherImplement::DispatcherImplement()
{
}

DispatcherImplement::~DispatcherImplement()
{
}

void DispatcherImplement::Register(ReciverInterface * reciver)
{
	if (nullptr == reciver)
	{
		return;
	}
	if (pri_reciver_set.count(reciver))
	{
		return;
	}
	pri_reciver_set.insert(reciver);
}

void DispatcherImplement::Register(ReciverInterface * reciver, uint32_t type)
{
	if (nullptr == reciver)
	{
		return;
	}
	reciver->InsertPacketType(type);
	if (pri_reciver_set.count(reciver))
	{
		return;
	}
	pri_reciver_set.insert(reciver);
}

void DispatcherImplement::Unregister(ReciverInterface * reciver)
{
	if (nullptr == reciver)
	{
		return;
	}
	if (pri_reciver_set.count(reciver))
	{
		pri_reciver_set.erase(reciver);
	}
}

void DispatcherImplement::Unregister(ReciverInterface * reciver, uint32_t type)
{
	if (nullptr == reciver)
	{
		return;
	}
	reciver->ErasePacketType(type);
	if (pri_reciver_set.count(reciver) && 0 == reciver->GetPacketNum())
	{
		pri_reciver_set.erase(reciver);
	}
}

void DispatcherImplement::Dispatch(DataHeader * header)
{
	for (auto it = pri_reciver_set.begin(); it != pri_reciver_set.end(); it++)
	{
		if ((*it)->NeedPacket(header->pub_type))
		{
			(*it)->DealPacket(header);
		}
	}
}