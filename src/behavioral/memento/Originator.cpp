#include "Originator.h"

Originator::Originator()
{

}

Originator::~Originator()
{
}

Memento Originator::Save()
{
	std::cout << "[Save   ]: " << PriState << std::endl;
	return Memento(PriState);
}

void Originator::Restore(Memento memento)
{
	PriState = memento.GetState();
	std::cout << "[Restore]: " << PriState << std::endl;
}

void Originator::SetState(std::string state)
{
	PriState = state;
}
