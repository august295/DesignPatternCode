#ifndef __ABSTRACTION_HPP__
#define __ABSTRACTION_HPP__

#include "Implementor.hpp"

class Abstraction
{
public:
	Abstraction(Implementor* imp) { PPubImp = imp; };
	virtual ~Abstraction() {};

    virtual void Operation() = 0;

public:
	Implementor* PPubImp;
};

#endif