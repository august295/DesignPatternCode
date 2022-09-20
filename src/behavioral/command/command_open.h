#ifndef __COMMAND_OPEN_H__
#define __COMMAND_OPEN_H__

#include "command.hpp"
#include "receiver.h"

class command_open : public command
{
public:
    command_open();
    ~command_open();

    command_open(receiver * rec);
    void set_receiver(receiver * rec);
    void execute();

private:
    receiver * m_receiver;
};

#endif