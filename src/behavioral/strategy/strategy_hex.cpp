#include <iostream>

#include "strategy_hex.h"

strategy_hex::strategy_hex()
{}

strategy_hex::~strategy_hex()
{}

void strategy_hex::algorithm(int num)
{
    printf("%-30s %d to %x\n", "select decimal to hexadecimal", num, num);
}