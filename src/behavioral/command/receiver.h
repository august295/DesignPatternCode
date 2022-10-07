#ifndef __RECEIVER_H__
#define __RECEIVER_H__

#include <iostream>

class Receiver
{
public:
    Receiver();
    ~Receiver();

    void Open();
    void Shut();

private:
    bool PriState;
};

#endif