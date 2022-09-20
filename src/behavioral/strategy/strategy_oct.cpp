#include <iostream>

#include "strategy_oct.h"

strategy_oct::strategy_oct()
{}

strategy_oct::~strategy_oct()
{}

void strategy_oct::algorithm(int num)
{
    printf("%-30s %d to %o\n", "select decimal to octal", num, num);
}