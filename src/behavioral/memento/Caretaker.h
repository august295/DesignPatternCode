#ifndef __CARETAKER_H__
#define __CARETAKER_H__

#include <stack>

#include "Originator.h"

class Caretaker
{
public:
	Caretaker(Originator* originator);
	~Caretaker();

	void MakeBackup();
	void Undo();

private:
	Originator* PPriOriginator;
	std::stack<Memento> PriMementoStack;
};

#endif