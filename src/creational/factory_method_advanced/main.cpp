#include <iostream>

#include "FileLogFactory.h"
#include "DatabaseLogFactory.h"

/**
 * 日志记录器
 *		某系统日志记录器要求支持多种日志记录方式，如文件记录、数据库记录等，
 *		且用户可以根据要求动态选择日志记录方式， 现使用工厂方法模式设计该系统。
 */
int main()
{
    ILogFactory * f1 = new FileLogFactory();
	ILog * log1 = f1->CreateLog();
	log1->WriteLog();

    ILogFactory * f2 = new DatabaseLogFactory();
	ILog * log2 = f2->CreateLog();
	log2->WriteLog();

    return 0;
}