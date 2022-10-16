#ifndef __IVISITOR_HPP__
#define __IVISITOR_HPP__

class ConcreteElementA;
class ConcreteElementB;

class IVisitor
{
public:
    IVisitor(){};
    virtual ~IVisitor(){};

	virtual void visit(ConcreteElementA* elementA) = 0;
	virtual void visit(ConcreteElementB* elementB) = 0;
};

#endif