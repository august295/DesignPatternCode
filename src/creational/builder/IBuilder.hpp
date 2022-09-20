#ifndef __BUILDER_HPP__
#define __BUILDER_HPP__

#include "Product.h"

class IBuilder
{
public:
	IBuilder() {};
	virtual ~IBuilder() {};

	virtual Product * GetResult() { return PriProduct; };
	virtual void      BuildPartA() = 0;
	virtual void      BuildPartB() = 0;
	virtual void      BuildPartC() = 0;

protected:
	Product * PriProduct; /* 生产者 */
};

#endif