#include <iostream>

#include "dispatcher_implement.h"

class Reciver1 : public ReciverInterface
{
    virtual void DealPacket(DataHeader * header)
    {
        switch (header->pub_type)
        {
        case GAME :
            std::cout << "Reciver1 [" << (char*)((DataContent *)header)->pub_content << "] game update" << std::endl;
            break;
        case FICTION :
            std::cout << "Reciver1 [" << (char*)((DataContent *)header)->pub_content << "] fiction update" << std::endl;
            break;
        default :
            std::cout << "Reciver1 [" << (char*)((DataContent *)header)->pub_content << "] unknown" << std::endl;
            break;
        }
    }
};

class Reciver2 : public ReciverInterface
{
    virtual void DealPacket(DataHeader * header)
    {
        switch (header->pub_type)
        {
        case GAME :
            std::cout << "Reciver2 [" << (char*)((DataContent *)header)->pub_content << "] game update" << std::endl;
            break;
        case FICTION :
            std::cout << "Reciver2 [" << (char*)((DataContent *)header)->pub_content << "] fiction update" << std::endl;
            break;
        default :
            std::cout << "Reciver2 [" << (char*)((DataContent *)header)->pub_content << "] unknown" << std::endl;
            break;
        }
    }
};

int main()
{
    Reciver1 * r1 = new Reciver1();
    Reciver2 * r2 = new Reciver2();
    DispatcherInterface::GetInstance()->Register(r1);          // 接收全部
    DispatcherInterface::GetInstance()->Register(r2, FICTION); // 接收小说
    DataContent d1(GAME, "Civilization VI");
    DispatcherInterface::GetInstance()->Dispatch(&d1);
    DataContent d2(FICTION, "Doctor Who");
    DispatcherInterface::GetInstance()->Dispatch(&d2);
    DataContent d3(COMIC, "Luo Xiaohei");
    DispatcherInterface::GetInstance()->Dispatch(&d3);

    return 0;
}