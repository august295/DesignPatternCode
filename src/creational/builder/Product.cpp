#include "Product.h"

Product::Product()
{
}

Product::~Product()
{
}

void Product::SetA(std::string a)
{
	PriA = a;
}

void Product::SetB(std::string b)
{
	PriB = b;
}

void Product::SetC(std::string c)
{
	PriC = c;
}

void Product::Show()
{
    std::cout << PriA << std::endl
              << PriB << std::endl
              << PriC << std::endl;
}