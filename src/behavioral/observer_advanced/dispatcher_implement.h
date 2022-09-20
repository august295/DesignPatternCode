#ifndef __DISPATCHER_IMPLEMENT_H__
#define __DISPATCHER_IMPLEMENT_H__

#include "interface.h"

class DispatcherImplement : public DispatcherInterface
{
private:
	std::set<ReciverInterface *> pri_reciver_set;

public:
	DispatcherImplement();
	~DispatcherImplement();

	/**
	 * @brief 注册接收者
	 *
	 * @param reciver  接收者对象指针
	 */
	virtual void Register(ReciverInterface * reciver);

	/**
	 * @brief 注册接收者以及具体接收类型
	 *
	 * @param reciver  接收者对象指针
	 * @param type     接收者具体接收类型
	 */
	virtual void Register(ReciverInterface * reciver, uint32_t type);

	/**
	 * @brief 注销接收者
	 *
	 * @param reciver  接收者对象指针
	 */
	virtual void Unregister(ReciverInterface * reciver);

	/**
	 * @brief 注销接收者以及具体接收类型
	 *
	 * @param reciver  接收者对象指针
	 * @param type     接收者具体接收类型
	 */
	virtual void Unregister(ReciverInterface * reciver, uint32_t type);

	/**
	 * @brief 分发数据，事件通知
	 *
	 * @param header   数据包
	 */
	virtual void Dispatch(DataHeader * header);
};

#endif