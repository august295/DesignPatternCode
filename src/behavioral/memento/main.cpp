#include <iostream>

#include "Caretaker.h"

/**
 * 1. 备忘录模式
 *      允许在不暴露对象实现细节的情况下保存和恢复对象之前的状态。
 * 2. 模式结构
 *      Memento: 备忘录
 *      Originator: 原发器
 *      Caretaker: 负责人
 */
int main()
{
	Originator * po = new Originator();
	Caretaker * pc = new Caretaker(po);
	
	po->SetState("Hello");
	pc->MakeBackup();
	po->SetState("World");
	pc->MakeBackup();
	pc->Undo();
	po->SetState("C++");
	pc->MakeBackup();
	pc->Undo();
	pc->Undo();
	pc->Undo();

	delete po;
	delete pc;

    return 0;
}