#ifndef __CONCRETETEMPLATEA_H__
#define __CONCRETETEMPLATEA_H__

#include "ITemplate.hpp"

class ConcreteTemplateA : public ITemplate
{
public:
    ConcreteTemplateA();
    ~ConcreteTemplateA();

	void ParseData() override;
};

#endif