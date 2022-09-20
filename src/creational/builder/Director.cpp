#include "Director.h"

Director::Director()
{

}

Director::~Director()
{
	
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