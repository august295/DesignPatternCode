#include "CommandShut.h"

CommandShut::~CommandShut()
{
}

CommandShut::CommandShut(std::shared_ptr<Receiver> ptrRec)
{
    PtrPriReceiver = ptrRec;
}

void CommandShut::Execute()
{
    std::cout << "deal with shutdown" << std::endl;
	PtrPriReceiver->Shut();
}