#ifndef __COMMANDSHUT_H__
#define __COMMANDSHUT_H__

#include "ICommand.hpp"
#include "Receiver.h"

class CommandShut : public ICommand
{
public:
	CommandShut(std::shared_ptr<Receiver> ptrRec);
    ~CommandShut();

    void Execute() override;

private:
	std::shared_ptr<Receiver> PtrPriReceiver;
};

#endif