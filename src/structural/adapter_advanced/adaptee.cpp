#include "adaptee.h"

adaptee::adaptee()
{
    m_deque.clear();
}

adaptee::~adaptee()
{
}

void adaptee::push_front(int num)
{
    m_deque.push_front(num);
}

void adaptee::push_back(int num)
{
    m_deque.push_back(num);
}

void adaptee::pop_front()
{
    m_deque.pop_front();
}

void adaptee::pop_back()
{
    m_deque.pop_back();
}

void adaptee::print()
{
    for (int i = 0; i < m_deque.size(); i++)
    {
        std::cout << m_deque[i] << " ";
    }
    std::cout << std::endl;
}