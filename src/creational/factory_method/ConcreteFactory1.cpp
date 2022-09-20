#include "ConcreteFactory1.h"

ConcreteFactory1::ConcreteFactory1()
{

}

ConcreteFactory1::~ConcreteFactory1()
{

}

IProduct * ConcreteFactory1::FactoryMethod()
{
	return new ConcreteProduct1();
}
