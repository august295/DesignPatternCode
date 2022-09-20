#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "IBuilder.hpp"
#include "Product.h"

class Director
{
public:
    Director();
    ~Director();

    Product * Construct();
	void      SetBuilder(IBuilder * build);

private:
    IBuilder * PriBuilder;
};

#endif