#ifndef __COMMANDOPEN_H__
#define __COMMANDOPEN_H__

#include <memory>

#include "ICommand.hpp"
#include "Receiver.h"

class CommandOpen : public ICommand
{
public:
	CommandOpen(std::shared_ptr<Receiver> ptrRec);
    ~CommandOpen();

    void Execute() override;

private:
	std::shared_ptr<Receiver> PtrPriReceiver;
};

#endif