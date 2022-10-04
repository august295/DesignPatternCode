#include <iostream>

#include "LeafA.h"
#include "LeafB.h"
#include "Composite.h"

/**
 * 1. 组合模式
 *      你可以使用它将对象组合成树状结构， 并且能像使用独立对象一样使用它们。
 * 2. 模式结构
 *      Component：组件
 *      Composite：容器，组合组件
 *      Leaf：叶节点
 */
int main()
{
	// 单个测试
	IComponent* pc1 = new LeafA();
	std::cout << pc1->Execute() << std::endl;

	// 组合测试
	IComponent* pc2 = new LeafA();
	IComponent* pc3 = new LeafB();
	Composite* tree = new Composite();
	Composite* branch1 = new Composite();
	Composite* branch2 = new Composite();
	branch1->Add(pc1);
	branch1->Add(pc3);
	branch2->Add(pc2);
	tree->Add(branch1);
	tree->Add(branch2);
	std::cout << tree->Execute() << std::endl;

	delete pc1;
	delete pc2;
	delete pc3;
	delete tree;
	delete branch1;
	delete branch2;

    return 0;
}