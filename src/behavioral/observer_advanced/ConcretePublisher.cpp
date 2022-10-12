#include "ConcretePublisher.h"

ConcretePublisher::ConcretePublisher()
{

}

ConcretePublisher::~ConcretePublisher()
{

}

void ConcretePublisher::Register(ISubscriber * reciver)
{
	std::lock_guard<std::mutex> autoLock(MutexList);
	ReciverList.push_back(reciver);
}

void ConcretePublisher::Register(ISubscriber * reciver, std::set<uint32_t> type)
{
	std::lock_guard<std::mutex> autoLock(MutexList);
	reciver->InsertPacketType(type);
	ReciverList.push_back(reciver);
}

void ConcretePublisher::Unregister(ISubscriber * reciver)
{
	std::lock_guard<std::mutex> autoLock(MutexList);
	ReciverList.remove(reciver);
}

void ConcretePublisher::Unregister(ISubscriber * reciver, std::set<uint32_t> type)
{
	std::lock_guard<std::mutex> autoLock(MutexList);
	reciver->ErasePacketType(type);
	if (reciver->GetPacketNum() == 0)
	{
		ReciverList.remove(reciver);
	}
}

void ConcretePublisher::Dispatch(DataHeader * header)
{
	std::lock_guard<std::mutex> autoLock(MutexList);
	for (auto it = ReciverList.begin(); it != ReciverList.end(); it++)
	{
		if ((*it)->NeedPacket(header->pub_type))
		{
			(*it)->DealPacket(header);
		}
	}
}