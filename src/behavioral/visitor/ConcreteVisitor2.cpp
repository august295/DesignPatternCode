#include <iostream>

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor2.h"

ConcreteVisitor2::ConcreteVisitor2()
{

}

ConcreteVisitor2::~ConcreteVisitor2()
{

}

void ConcreteVisitor2::visit(ConcreteElementA* elementA)
{
	std::cout << elementA->FeatureA() << " + ConcreteVisitor2\n";
}

void ConcreteVisitor2::visit(ConcreteElementB* elementB)
{
	std::cout << elementB->FeatureB() << " + ConcreteVisitor2\n";
}
