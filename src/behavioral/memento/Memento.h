#ifndef __MEMENTO_H__
#define __MEMENTO_H__

#include <string>

class Memento
{
public:
	Memento(std::string state);
	~Memento();

	std::string GetState();

private:
	std::string PriState;
};

#endif