#ifndef __SINGLETON_CPP11_H__
#define __SINGLETON_CPP11_H__

#include <iostream>

class singleton_cpp11
{
public:
    static singleton_cpp11 * get_instance();

    void        set_name(std::string name);
    std::string get_name();

private:
    singleton_cpp11();
    ~singleton_cpp11();

    std::string m_name; // 数据
};

#endif