#ifndef __IMPLEMENTOR_HPP__
#define __IMPLEMENTOR_HPP__

class Implementor
{
public:
	Implementor() {};
	virtual ~Implementor() {};

	virtual void OperationImp() = 0;
};


#endif
