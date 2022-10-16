#include "IVisitor.hpp"
#include "ConcreteElementB.h"

ConcreteElementB::ConcreteElementB()
{

}

ConcreteElementB::~ConcreteElementB()
{

}

void ConcreteElementB::Accept(IVisitor* visitor)
{
	visitor->visit(this);
}

std::string ConcreteElementB::FeatureB()
{
	return "B";
}
