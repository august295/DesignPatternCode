#include "ConcreteFactory2.h"

ConcreteFactory2::ConcreteFactory2()
{

}

ConcreteFactory2::~ConcreteFactory2()
{

}

IProduct * ConcreteFactory2::FactoryMethod()
{
	return new ConcreteProduct2();
}
