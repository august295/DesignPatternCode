#ifndef __CONCRETEELEMENTA_H__
#define __CONCRETEELEMENTA_H__

#include <string>

#include "IElement.hpp"

class ConcreteElementA : public IElement
{
public:
    ConcreteElementA();
    ~ConcreteElementA();

	void Accept(IVisitor* visitor) override;
	std::string FeatureA();
};

#endif