#ifndef __COMMAND_SHUT_H__
#define __COMMAND_SHUT_H__

#include "command.hpp"
#include "receiver.h"

class command_shut : public command
{
public:
    command_shut();
    ~command_shut();

    command_shut(receiver * rec);
    void set_receiver(receiver * rec);
    void execute();

private:
    receiver * m_receiver;
};

#endif