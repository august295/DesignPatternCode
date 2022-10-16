#ifndef __CONCRETETEMPLATEB_H__
#define __CONCRETETEMPLATEB_H__

#include "ITemplate.hpp"

class ConcreteTemplateB : public ITemplate
{
public:
    ConcreteTemplateB();
    ~ConcreteTemplateB();

    void ParseData() override;
};

#endif