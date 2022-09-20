#include <mutex>

#include "singleton_cpp11.h"

singleton_cpp11::singleton_cpp11()
{
}

singleton_cpp11::~singleton_cpp11()
{
}

singleton_cpp11 * singleton_cpp11::get_instance()
{
    /**
     * C++11标准 Meyers' Singleton 更优雅
     * 只有当第一次访问 getInstance() 方法时才创建实例
     */
    static singleton_cpp11 m_instance;
    return &m_instance;
}

void singleton_cpp11::set_name(std::string name)
{
    m_name = name;
}

std::string singleton_cpp11::get_name()
{
    return m_name;
}