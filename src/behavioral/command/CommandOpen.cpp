#include "CommandOpen.h"

CommandOpen::~CommandOpen()
{
}

CommandOpen::CommandOpen(std::shared_ptr<Receiver> ptrRec)
{
    PtrPriReceiver = ptrRec;
}

void CommandOpen::Execute()
{
    std::cout << "deal with Open" << std::endl;
	PtrPriReceiver->Open();
}