#include "Caretaker.h"

Caretaker::Caretaker(Originator* originator)
{
	PPriOriginator = originator;
}

Caretaker::~Caretaker()
{
}

void Caretaker::MakeBackup()
{
	PriMementoStack.push(PPriOriginator->Save());
}

void Caretaker::Undo()
{
	if (PriMementoStack.empty())
	{
		std::cout << "Restore empty" << std::endl;
	}
	else
	{
		PPriOriginator->Restore(PriMementoStack.top());
		PriMementoStack.pop();
	}
}