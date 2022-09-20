#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>

class singleton
{
public:
    static singleton * get_instance();

    void        set_name(std::string name);
    std::string get_name();

private:
    singleton();
    ~singleton();

    static singleton * m_instance; // 单例实例
    std::string        m_name;     // 数据
};

#endif