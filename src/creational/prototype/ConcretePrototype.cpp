#include "ConcretePrototype.h"

ConcretePrototype::ConcretePrototype()
{
	
}

ConcretePrototype::~ConcretePrototype()
{
	
}

ConcretePrototype::ConcretePrototype(ComplexClass1 * complexClass1)
{
	PriComplexClass1 = complexClass1;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype & concrete)
{
	PriComplexClass1 = concrete.PriComplexClass1;
}

Prototype * ConcretePrototype::Clone()
{
    /* 调用拷贝构造函数，需使用深拷贝 */
    return new ConcretePrototype(*this);
}

void ConcretePrototype::SetPriComplexClass1(ComplexClass1 * complexClass1)
{
	PriComplexClass1 = complexClass1;
}

void ConcretePrototype::Show()
{
	std::cout << PriComplexClass1->GetStr() << std::endl;
}
