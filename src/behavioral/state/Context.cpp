#include <iostream>

#include "IState.hpp"
#include "Context.h"

Context::Context(IState* state)
	: PPriState(nullptr)
{
	ChangeState(state);
}

Context::~Context()
{
	delete this->PPriState;
	this->PPriState = nullptr;
}

void Context::ChangeState(IState* state)
{
	std::cout << "Context: Transition to " << typeid(*state).name() << ".\n";
	if (this->PPriState != nullptr)
	{
		delete this->PPriState;
		this->PPriState = nullptr;
	}
	this->PPriState = state;
	this->PPriState->SetContext(this);
}

void Context::DoThis()
{
	this->PPriState->DoThis();
}

void Context::DoThat()
{
	this->PPriState->DoThat();
}
