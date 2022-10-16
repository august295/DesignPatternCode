#ifndef __CONCRETEVISITOR2_H__
#define __CONCRETEVISITOR2_H__

#include "IVisitor.hpp"

class ConcreteVisitor2 : public IVisitor
{
public:
	ConcreteVisitor2();
    ~ConcreteVisitor2();

	void visit(ConcreteElementA* elementA) override;
	void visit(ConcreteElementB* elementB) override;
};

#endif