#include "adaptor_stack.h"

adaptor_stack::adaptor_stack()
{
    m_adaptee = new adaptee();
}

adaptor_stack::~adaptor_stack()
{
    delete m_adaptee;
}

void adaptor_stack::push(int num)
{
    m_adaptee->push_back(num);
}

void adaptor_stack::pop()
{
    m_adaptee->pop_back();
}

void adaptor_stack::print()
{
    std::cout << "stack: ";
    m_adaptee->print();
}