#ifndef __ICOMPONENT_HPP__
#define __ICOMPONENT_HPP__

#include <string>

class IComponent
{
public:
	IComponent() {};
	virtual ~IComponent() {};

	// 获取父节点
	void SetParent(IComponent* pCom) { this->PPubParent = pCom; };
	IComponent* GetParent() { return this->PPubParent; };

	virtual bool IsComposite() { return false; };
	virtual void Add(IComponent *component) {};
	virtual void Remove(IComponent *component) {};
	virtual std::string Execute() = 0;

public:
	IComponent* PPubParent;
};


#endif
