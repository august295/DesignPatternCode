#ifndef __IPUBLISHER_H__
#define __IPUBLISHER_H__

#include <memory>

#include "ISubscriber.hpp"

class ConcretePublisher;

class Publisher
{
public:
	static std::shared_ptr<ConcretePublisher> GetInstance();

public:
	Publisher();
	virtual ~Publisher();

	/**
	 * @brief 注册接收者
	 *
	 * @param reciver  接收者对象指针
	 */
	virtual void Register(ISubscriber * reciver) = 0;

	/**
	 * @brief 注册接收者以及具体接收类型
	 *
	 * @param reciver  接收者对象指针
	 * @param type     接收者具体接收类型
	 */
	virtual void Register(ISubscriber * reciver, std::set<uint32_t> type) = 0;

	/**
	 * @brief 注销接收者
	 *
	 * @param reciver  接收者对象指针
	 */
	virtual void Unregister(ISubscriber * reciver) = 0;

	/**
	 * @brief 注销接收者以及具体接收类型
	 *
	 * @param reciver  接收者对象指针
	 * @param type     接收者具体接收类型
	 */
	virtual void Unregister(ISubscriber * reciver, std::set<uint32_t> type) = 0;

	/**
	 * @brief 分发数据，事件通知
	 *
	 * @param header   数据包
	 */
	virtual void Dispatch(DataHeader * header) = 0;

private:
	static std::shared_ptr<ConcretePublisher> ConcretePublisherPtr;
};

#endif