#ifndef __INTERFACE_H__
#define __INTERFACE_H__

#include <memory>
#include <set>

#include "common.h"

// 接收者抽象类
class ReciverInterface
{
private:
    //  订阅类型，空代表全部订阅
    std::set<uint32_t> pri_type_set;

public:
    ReciverInterface();
    ~ReciverInterface();

    /**
     * @brief 获取订阅类型个数
     *
     * @return int     订阅类型个数
     */
    virtual size_t GetPacketNum();

    /**
     * @brief 添加订阅类型
     *
     * @param type     订阅类型
     */
    virtual void InsertPacketType(uint32_t type);

    /**
     * @brief 移除订阅类型
     *
     * @param type     订阅类型
     */
    virtual void ErasePacketType(uint32_t type);

    /**
     * @brief 判断类型是否订阅
     *
     * @param type     订阅类型
     * @return true    已订阅
     * @return false   未订阅
     */
    virtual bool NeedPacket(uint32_t type);

    /**
     * @brief 处理数据包
     *
     * @param header   数据包
     */
    virtual void DealPacket(DataHeader * header) = 0;
};

// 发送者具体类，提前声明
class DispatcherImplement;
// 发送者抽象类
class DispatcherInterface
{
private:
    // 子类智能指针
    static std::shared_ptr<DispatcherImplement> pri_instance;

public:
    DispatcherInterface();
    ~DispatcherInterface();

    /**
     * @brief 单例
     */
    static DispatcherInterface * GetInstance();

    /**
     * @brief 注册接收者
     *
     * @param reciver  接收者对象指针
     */
    virtual void Register(ReciverInterface * reciver)                  = 0;

    /**
     * @brief 注册接收者以及具体接收类型
     *
     * @param reciver  接收者对象指针
     * @param type     接收者具体接收类型
     */
    virtual void Register(ReciverInterface * reciver, uint32_t type)   = 0;

    /**
     * @brief 注销接收者
     *
     * @param reciver  接收者对象指针
     */
    virtual void Unregister(ReciverInterface * reciver)                = 0;

    /**
     * @brief 注销接收者以及具体接收类型
     *
     * @param reciver  接收者对象指针
     * @param type     接收者具体接收类型
     */
    virtual void Unregister(ReciverInterface * reciver, uint32_t type) = 0;

    /**
     * @brief 分发数据，事件通知
     *
     * @param header   数据包
     */
    virtual void Dispatch(DataHeader * header)                         = 0;
};

#endif