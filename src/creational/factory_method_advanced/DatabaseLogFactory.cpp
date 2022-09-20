#include "DatabaseLogFactory.h"

DatabaseLogFactory::DatabaseLogFactory()
{

}

DatabaseLogFactory::~DatabaseLogFactory()
{

}

ILog * DatabaseLogFactory::CreateLog()
{
	return new DatabaseLog();
}
