#include <iostream>

#include "Context.h"

/**
 * 1. 享元模式
 *      享元是一种结构型设计模式，它摒弃了在每个对象中保存所有数据的方式，
 *      通过共享多个对象所共有的相同状态，让你能在有限的内存容量中载入更多对象。 
 * 2. 模式结构
 *      Flyweight：享元
 *      Flyweight Factory：享元工厂
 *      Context：情景
 */
int main()
{
	Context c1 = Context(SharedState("Tree", "Green"), UniqueState(1, 1));
	Context c2 = Context(SharedState("Tree", "Green"), UniqueState(1, 2));
	Context c3 = Context(SharedState("Grass", "Green"), UniqueState(2, 1));
	Context c4 = Context(SharedState("Grass", "Green"), UniqueState(2, 2));
	Context c5 = Context(SharedState("Flower", "Red"), UniqueState(2, 2));
	Context c6 = Context(SharedState("Flower", "Yellow"), UniqueState(2, 2));

	std::cout << c1.GetFlyweight() << std::endl;
	std::cout << c2.GetFlyweight() << std::endl;
	std::cout << c3.GetFlyweight() << std::endl;
	std::cout << c4.GetFlyweight() << std::endl;
	std::cout << c5.GetFlyweight() << std::endl;
	std::cout << c6.GetFlyweight() << std::endl;

    return 0;
}