#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include <memory>

#include "IStrategy.hpp"

class Context
{
public:
    Context();
    ~Context();

	void SetStrategy(std::unique_ptr<IStrategy> && ptrStrategy);
	void DoSomething(std::vector<int > vec);

private:
	std::unique_ptr<IStrategy> PtrStrategy;
};

#endif