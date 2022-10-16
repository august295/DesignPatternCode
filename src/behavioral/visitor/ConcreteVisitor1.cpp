#include <iostream>

#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor1.h"

ConcreteVisitor1::ConcreteVisitor1()
{

}

ConcreteVisitor1::~ConcreteVisitor1()
{

}

void ConcreteVisitor1::visit(ConcreteElementA* elementA)
{
	std::cout << elementA->FeatureA() << " + ConcreteVisitor1\n";
}

void ConcreteVisitor1::visit(ConcreteElementB* elementB)
{
	std::cout << elementB->FeatureB() << " + ConcreteVisitor1\n";
}
