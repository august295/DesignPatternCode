#include "Receiver.h"

Receiver::Receiver()
{
    PriState = false;
}

Receiver::~Receiver()
{
}

void Receiver::Shut()
{
    PriState = false;
}

void Receiver::Open()
{
    PriState = true;
}