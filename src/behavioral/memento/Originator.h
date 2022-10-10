#ifndef __ORIGINATOR_H__
#define __ORIGINATOR_H__

#include <iostream>

#include "Memento.h"

class Originator
{
public:
	Originator();
    ~Originator();

	Memento Save();
	void Restore(Memento memento);
	void SetState(std::string state);

private:
	std::string PriState;
};

#endif