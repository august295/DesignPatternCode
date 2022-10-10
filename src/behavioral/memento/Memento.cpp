#include "Memento.h"

Memento::Memento(std::string state)
{
	PriState = state;
}

Memento::~Memento()
{
}

std::string Memento::GetState()
{
	return PriState;
}