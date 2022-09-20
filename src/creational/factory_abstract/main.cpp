#include <iostream>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

/**
 * 1. ���������������������ÿ�����������Ը���������
 *      ÿ�ο���ͨ�����幤���ഴ��һ����Ʒ���еĶ���������ӻ����滻��Ʒ��ȽϷ��㣬�����µľ��幤���Ͳ�Ʒ��ܷ��㣻
 *      ��Ҫȱ�����������µĲ�Ʒ�ȼ��ṹ�ܸ��ӣ���Ҫ�޸ĳ��󹤳������еľ��幤����
 */
int main()
{
	IFactory * f1 = new ConcreteFactory1();
	IProductA * pa1 = f1->CreateProductA();
	IProductB * pb1 = f1->CreateProductB();
	pa1->ProductA();
	pb1->ProductB();

	IFactory * f2 = new ConcreteFactory2();
	IProductA * pa2 = f2->CreateProductA();
	IProductB * pb2 = f2->CreateProductB();
	pa2->ProductA();
	pb2->ProductB();

	return 0;
}