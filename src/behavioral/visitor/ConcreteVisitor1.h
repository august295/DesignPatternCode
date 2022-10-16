#ifndef __CONCRETEVISITOR1_H__
#define __CONCRETEVISITOR1_H__

#include "IVisitor.hpp"

class ConcreteVisitor1 : public IVisitor
{
public:
	ConcreteVisitor1();
    ~ConcreteVisitor1();

	void visit(ConcreteElementA* elementA) override;
	void visit(ConcreteElementB* elementB) override;
};

#endif