#include <iostream>
#include <thread>
#include <chrono>

#include "BlackBoard.h"
#include "Control.h"
#include "ks1.h"
#include "ks2.h"

void func1(KnowledgeSource * ks)
{
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void func2(KnowledgeSource * ks)
{
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

int main()
{
	//BlackBoard * b = new BlackBoard();
	//KnowledgeSource * k1 = new ks1("ks1", b);
	//KnowledgeSource * k2 = new ks2("ks2", b);

	//b->addks(k1);
	//b->addks(k2);

	//Control * c = new Control(b);
	//while (true)
	//{
	//	k1->updateBlackboard();
	//	k2->updateBlackboard();
	//	c->loop();
	//}
	
	//std::thread t1 = std::thread(func1, k1);
	//std::thread t2 = std::thread(func2, k2);
	//t1.detach();
	//t2.detach();

    return 0;
}