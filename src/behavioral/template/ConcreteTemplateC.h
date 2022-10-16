#ifndef __CONCRETETEMPLATEC_H__
#define __CONCRETETEMPLATEC_H__

#include "ITemplate.hpp"

class ConcreteTemplateC : public ITemplate
{
public:
	ConcreteTemplateC();
    ~ConcreteTemplateC();

    void ParseData() override;
};

#endif