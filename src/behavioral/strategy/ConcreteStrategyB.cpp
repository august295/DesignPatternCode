#include <iostream>
#include <algorithm>

#include "ConcreteStrategyB.h"

ConcreteStrategyB::ConcreteStrategyB()
{

}

ConcreteStrategyB::~ConcreteStrategyB()
{

}

void ConcreteStrategyB::Algorithm(std::vector<int> vec)
{
	std::cout << "Sort from small to large: ";
	std::sort(std::begin(vec), std::end(vec), std::less<>());
	for (auto v : vec)
	{
		std::cout << v << " ";
	}
	std::cout << "\n";
}
