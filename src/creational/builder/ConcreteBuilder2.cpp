#include "ConcreteBuilder2.h"

ConcreteBuilder2::ConcreteBuilder2()
{
	PriProduct = new Product();
}

ConcreteBuilder2::~ConcreteBuilder2()
{
	delete PriProduct;
}

void ConcreteBuilder2::BuildPartA()
{
	PriProduct->SetA("ConcreteBuilder2 A Style");
}

void ConcreteBuilder2::BuildPartB()
{
	PriProduct->SetB("ConcreteBuilder2 B Style");
}

void ConcreteBuilder2::BuildPartC()
{
	PriProduct->SetC("ConcreteBuilder2 C Style");
}
