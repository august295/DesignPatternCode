#include "IVisitor.hpp"
#include "ConcreteElementA.h"

ConcreteElementA::ConcreteElementA()
{

}

ConcreteElementA::~ConcreteElementA()
{

}

void ConcreteElementA::Accept(IVisitor* visitor)
{
	visitor->visit(this);
}

std::string ConcreteElementA::FeatureA()
{
	return "A";
}
