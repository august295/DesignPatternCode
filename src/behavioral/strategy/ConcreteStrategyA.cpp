#include <iostream>
#include <algorithm>

#include "ConcreteStrategyA.h"

ConcreteStrategyA::ConcreteStrategyA()
{

}

ConcreteStrategyA::~ConcreteStrategyA()
{

}

void ConcreteStrategyA::Algorithm(std::vector<int> vec)
{
	std::cout << "Sort from large to small: ";
	std::sort(std::begin(vec), std::end(vec), std::greater<>());
	for (auto v : vec)
	{
		std::cout << v << " ";
	}
	std::cout << "\n";
}
