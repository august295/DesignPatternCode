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
	PriProduct->SetA("A Style");
}

void ConcreteBuilder2::BuildPartB()
{
	PriProduct->SetB("B Style");
}

void ConcreteBuilder2::BuildPartC()
{
	PriProduct->SetC("C Style");
}
