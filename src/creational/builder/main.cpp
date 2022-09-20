#include <iostream>

#include "ConcreteBuilder2.h"
#include "ConcreteBuilder1.h"
#include "Director.h"
#include "Product.h"

/**
 * Product
 *      表示被构造的复杂对象。ConcreateBuilder创建该产品的内部表示并定义它的装配过程
 *      包含定义组成部件的类，包括将这些部件装配成最终产品的接口
 * IBuilder
 *      为创建一个Product对象的各个部件指定抽象接口
 * ConcreteBuilder
 *      实现IBuilder的接口以构造和装配该产品的各个部件
 *      定义并明确它所创建的表示
 *      提供一个检索产品的接口
 * Director
 *      构造一个使用IBuilder接口的对象
 */
int main()
{
	// 指挥者
	Director * direct = new Director();
	Product * product;

	// 建造奔驰
	std::cout << "Construct 1" << std::endl;
	IBuilder * b1 = new ConcreteBuilder1();
	direct->SetBuilder(b1);
	product = direct->Construct();
	product->Show();

	std::cout << "Construct 2" << std::endl;
	IBuilder * b2 = new ConcreteBuilder2();
	direct->SetBuilder(b2);
	product = direct->Construct();
	product->Show();
    
    return 0;
}