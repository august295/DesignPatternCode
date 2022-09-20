#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"

ConcreteFactory2::ConcreteFactory2()
{

}

ConcreteFactory2::~ConcreteFactory2()
{

}

IProductA * ConcreteFactory2::CreateProductA()
{
	return new ProductA2();
}

IProductB * ConcreteFactory2::CreateProductB()
{
	return new ProductB2();
}
