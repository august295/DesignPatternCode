#include <iostream>

#include "ConcretePublisher.h"
#include "SubscriberA.h"
#include "SubscriberB.h"

int main()
{
	// 继承类内部实现注册
	SubscriberA a;
	SubscriberB b;

	DataContent d1(GAME, "Civilization VI");
	DataContent d2(FICTION, "Doctor Who");
	DataContent d3(COMIC, "Luo Xiaohei");
	DataContent d4(-1, "Nothing");
	Publisher::GetInstance()->Dispatch(&d1);
	Publisher::GetInstance()->Dispatch(&d2);
	Publisher::GetInstance()->Dispatch(&d3);
	Publisher::GetInstance()->Dispatch(&d4);

    return 0;
}