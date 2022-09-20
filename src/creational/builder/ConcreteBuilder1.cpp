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
	PriProduct->SetA("A Style");
}

void ConcreteBuilder1::BuildPartB()
{
	PriProduct->SetB("B Style");
}

void ConcreteBuilder1::BuildPartC()
{
	PriProduct->SetC("C Style");
}
