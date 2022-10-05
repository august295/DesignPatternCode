#include <iostream>

#include "Proxy.h"

/**
 * 1. 代理模式
 *      给某一个对象提供一个代理，并由代理对象控制对原对象的引用。
 * 2. 模式结构
 *      Proxy：享元
 *      Proxy Factory：享元工厂
 *      IService：情景
 */
int main()
{
	Proxy* proxy = new Proxy();
	proxy->Operation("https://www.baidu.com/");
	proxy->Operation("https://cn.bing.com/");
	proxy->Operation("https://cn.bing.com/");
	proxy->Operation("https://cn.bing.com/");
	proxy->Operation("https://www.google.com/");
	delete proxy;

    return 0;
}