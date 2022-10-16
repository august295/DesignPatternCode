#ifndef __IELEMENT_HPP__
#define __IELEMENT_HPP__

class IVisitor;

class IElement
{
public:
	IElement(){};
    virtual ~IElement(){};
	
	virtual void Accept(IVisitor* visitor) = 0;
};

#endif