#include <iostream>

#include "Context.h"

Context::Context()
	: PtrStrategy(nullptr)
{
	
}

Context::~Context()
{

}

void Context::SetStrategy(std::unique_ptr<IStrategy> && ptrStrategy)
{
	PtrStrategy = std::move(ptrStrategy);
}

void Context::DoSomething(std::vector<int > vec)
{
	if (PtrStrategy)
	{
		PtrStrategy->Algorithm(vec);
	}
	else
	{
		std::cout << "Context: Strategy isn't set\n";
	}
}