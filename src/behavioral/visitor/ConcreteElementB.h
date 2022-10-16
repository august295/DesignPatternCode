#ifndef __CONCRETEELEMENTB_H__
#define __CONCRETEELEMENTB_H__

#include <string>

#include "IElement.hpp"

class ConcreteElementB : public IElement
{
public:
    ConcreteElementB();
    ~ConcreteElementB();

    void Accept(IVisitor* visitor) override;
	std::string FeatureB();
};

#endif