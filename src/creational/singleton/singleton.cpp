#include <mutex>

#include "singleton.h"

singleton * singleton::m_instance = nullptr;
std::mutex mutex;

singleton::singleton()
{
}

singleton::~singleton()
{
    // delete m_instance;
}

singleton * singleton::get_instance()
{
    /* 线程不安全 */
    if(!m_instance)
    {
        m_instance = new singleton();
    }
    /* 线程安全 */
    // if (!m_instance)
    // {
    //     mutex.lock();
    //     if (!m_instance)
    //     {
    //         m_instance = new singleton();
    //     }
    //     mutex.unlock();
    // }
    return m_instance;
}

void singleton::set_name(std::string name)
{
    m_name = name;
}

std::string singleton::get_name()
{
    return m_name;
}