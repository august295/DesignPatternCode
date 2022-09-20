#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"

ConcreteFactory1::ConcreteFactory1()
{

}

ConcreteFactory1::~ConcreteFactory1()
{

}

IProductA * ConcreteFactory1::CreateProductA()
{
	return new ProductA1();
}

IProductB * ConcreteFactory1::CreateProductB()
{
	return new ProductB1();
}
