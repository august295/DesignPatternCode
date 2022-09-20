#include <iostream>

#include "blackboard.h"
#include "control.h"
#include "ks1.h"
#include "ks2.h"

int main()
{
	blackboard * b = new blackboard();
	knowledgesource * k1 = new ks1("ks1", b);
	knowledgesource * k2 = new ks2("ks2", b);

	b->addks(k1);
	b->addks(k2);

	control * c = new control(b);
	while (true)
	{
		k1->updateBlackboard();
		k2->updateBlackboard();
		c->loop();
		std::cout << std::endl;
	}

    return 0;
}