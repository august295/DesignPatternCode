#include "SubClassPrototype.h"

SubClassPrototype::SubClassPrototype()
{
	
}

SubClassPrototype::~SubClassPrototype()
{
	
}

SubClassPrototype::SubClassPrototype(ComplexClass1 * complexClass1, ComplexClass2 * complexClass2)
	: ConcretePrototype(complexClass1)
{
	PriComplexClass2 = complexClass2;
}

SubClassPrototype::SubClassPrototype(const SubClassPrototype & sub)
	: ConcretePrototype(sub)
{
	PriComplexClass2 = sub.PriComplexClass2;
}

Prototype * SubClassPrototype::Clone()
{
    /* 调用拷贝构造函数，需使用深拷贝 */
    return new SubClassPrototype(*this);
}

void SubClassPrototype::Show()
{
	ConcretePrototype::Show();
	std::cout << PriComplexClass2->GetStr() << std::endl;
}
