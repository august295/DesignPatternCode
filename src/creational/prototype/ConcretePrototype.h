#ifndef __CONCRETEPROTOTYPE_H__
#define __CONCRETEPROTOTYPE_H__

#include <iostream>
#include <string>

#include "Prototype.hpp"

class ComplexClass1
{
public:
	void SetStr(std::string str) { PriStr = str; }
	std::string GetStr() { return PriStr; }

private:
	std::string PriStr;
};

class ConcretePrototype : public Prototype
{
public:
    ConcretePrototype();
    virtual ~ConcretePrototype();

    /* 有参构造 */
    ConcretePrototype(ComplexClass1 * complexClass1);
    /* 深度拷贝构造，返回新的对象 */
    ConcretePrototype(const ConcretePrototype & concrete);
    /* 关键原型模式函数，复制自身 */
    virtual Prototype * Clone() override;

	void SetPriComplexClass1(ComplexClass1 * PriComplexClass1);
	void Show();

private:
	ComplexClass1 * PriComplexClass1;
};

#endif