#ifndef __SUBCLASSPROTOTYPE_H__
#define __SUBCLASSPROTOTYPE_H__

#include "ConcretePrototype.h"

class ComplexClass2
{
public:
	void SetStr(std::string str) { PriStr = str; }
	std::string GetStr() { return PriStr; }

private:
	std::string PriStr;
};

class SubClassPrototype : public ConcretePrototype
{
public:
	SubClassPrototype();
    virtual ~SubClassPrototype();

    /* 有参构造 */
	SubClassPrototype(ComplexClass1 * complexClass1, ComplexClass2 * complexClass2);
    /* 深度拷贝构造，返回新的对象 */
	SubClassPrototype(const SubClassPrototype & sub);
    /* 关键原型模式函数，复制自身 */
    virtual Prototype * Clone();

	void Show();

private:
	ComplexClass2 * PriComplexClass2;
};

#endif