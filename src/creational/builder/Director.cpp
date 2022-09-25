#include "Director.h"

Director::Director()
{
	PriBuilder = nullptr;
}

Director::~Director()
{
	if (PriBuilder)
	{
		delete PriBuilder;
		PriBuilder = nullptr;
	}
}

Product * Director::Construct()
{
	PriBuilder->BuildPartA();
	PriBuilder->BuildPartB();
	PriBuilder->BuildPartC();
	return PriBuilder->GetResult();
}

void Director::SetBuilder(IBuilder * build)
{
	PriBuilder = build;
}