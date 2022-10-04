#ifndef __COMPOSITE_H__
#define __COMPOSITE_H__

#include <list>

#include "IComponent.hpp"

class Composite : public IComponent
{
public:
	Composite();
    ~Composite();

	std::list<IComponent*> GetChildren();

	bool IsComposite() override;
    void Add(IComponent* pCom) override;
	void Remove(IComponent* pCom) override;
	std::string Execute() override;

private:
	std::list<IComponent*> PriComList;
};

#endif