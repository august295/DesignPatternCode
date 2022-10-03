#include "adaptor_queue.h"

adaptor_queue::adaptor_queue()
{
    m_adaptee = new adaptee();
}

adaptor_queue::~adaptor_queue()
{
    delete m_adaptee;
}

void adaptor_queue::push(int num)
{
    m_adaptee->push_back(num);
}

void adaptor_queue::pop()
{
    m_adaptee->pop_front();
}

void adaptor_queue::print()
{
    std::cout << "queue: ";
    m_adaptee->print();
}