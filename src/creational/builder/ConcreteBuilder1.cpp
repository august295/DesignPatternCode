#include "ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1()
{
	PriProduct = new Product();
}

ConcreteBuilder1::~ConcreteBuilder1()
{
    delete PriProduct;
}

void ConcreteBuilder1::BuildPartA()
{
	PriProduct->SetA("ConcreteBuilder1 A Style");
}

void ConcreteBuilder1::BuildPartB()
{
	PriProduct->SetB("ConcreteBuilder1 B Style");
}

void ConcreteBuilder1::BuildPartC()
{
	PriProduct->SetC("ConcreteBuilder1 C Style");
}
