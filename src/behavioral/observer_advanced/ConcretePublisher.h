#ifndef __CONCRETEPUBLISHER_H__
#define __CONCRETEPUBLISHER_H__

#include <list>
#include <mutex>
#include <thread>

#include "Publisher.h"
#include "ISubscriber.hpp"

class ConcretePublisher : public Publisher
{
public:
	ConcretePublisher();
	~ConcretePublisher();

	/**
	 * @brief 注册接收者
	 *
	 * @param reciver  接收者对象指针
	 */
	void Register(ISubscriber * reciver) override;

	/**
	 * @brief 注册接收者以及具体接收类型
	 *
	 * @param reciver  接收者对象指针
	 * @param type     接收者具体接收类型
	 */
	void Register(ISubscriber * reciver, std::set<uint32_t> type) override;

	/**
	 * @brief 注销接收者
	 *
	 * @param reciver  接收者对象指针
	 */
	void Unregister(ISubscriber * reciver) override;

	/**
	 * @brief 注销接收者以及具体接收类型
	 *
	 * @param reciver  接收者对象指针
	 * @param type     接收者具体接收类型
	 */
	void Unregister(ISubscriber * reciver, std::set<uint32_t> type) override;

	/**
	 * @brief 分发数据，事件通知
	 *
	 * @param header   数据包
	 */
	void Dispatch(DataHeader * header) override;

private:
	std::list<ISubscriber *> ReciverList;
	std::mutex MutexList;
};

#endif