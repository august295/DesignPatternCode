#include <iostream>
#include <string>

#include "singleton.h"
#include "singleton_cpp11.h"

/**
 * 单例模式的要点有三个
 *  1. 是某个类只能有一个实例
 *  2. 是它必须自行创建这个实例
 *  3. 是它必须自行向整个系统提供这个实例
 *
 * 单例模式(Singleton Pattern)
 *  单例模式确保某一个类只有一个实例，而且自行实例化并向整个系统提供这个实例，这个类称为单例类，它提供全局访问的方法。
 */
int
main()
{
    singleton_cpp11* s1 = singleton_cpp11::get_instance();
    singleton_cpp11* s2 = singleton_cpp11::get_instance();
    std::cout << "s1 address: " << s1 << std::endl;
    std::cout << "s2 address: " << s2 << std::endl;

    return 0;
}