#ifndef __SUBSCRIBER_HPP__
#define __SUBSCRIBER_HPP__

#include <set>

#include "Common.h"

// 接收者抽象类
class ISubscriber
{
public:
	ISubscriber() {};
	virtual ~ISubscriber() {};

	/**
	 * @brief 获取订阅类型个数
	 *
	 * @return int     订阅类型个数
	 */
	virtual size_t GetPacketNum()
	{
		return pri_type_set.size();
	}

	/**
	 * @brief 添加订阅类型
	 *
	 * @param type     订阅类型
	 */
	virtual void InsertPacketType(std::set<uint32_t> typeSet)
	{
		pri_type_set.insert(typeSet.begin(), typeSet.end());
	}

	/**
	 * @brief 移除订阅类型
	 *
	 * @param type     订阅类型
	 */
	virtual void ErasePacketType(std::set<uint32_t> typeSet)
	{
		pri_type_set.erase(typeSet.begin(), typeSet.end());
	}

	/**
	 * @brief 判断类型是否订阅
	 *
	 * @param type     订阅类型
	 * @return true    已订阅
	 * @return false   未订阅
	 */
	virtual bool NeedPacket(uint32_t type)
	{
		if (pri_type_set.size() == 0 || pri_type_set.count(type))
		{
			return true;
		}
		return false;
	}

	/**
	 * @brief 处理数据包
	 *
	 * @param header   数据包
	 */
	virtual void DealPacket(DataHeader * header) = 0;

private:
	//  订阅类型，空代表全部订阅
	std::set<uint32_t> pri_type_set;
};

#endif
