#include "FileLogFactory.h"

FileLogFactory::FileLogFactory()
{

}

FileLogFactory::~FileLogFactory()
{

}

ILog * FileLogFactory::CreateLog()
{
	return new FileLog();
}
