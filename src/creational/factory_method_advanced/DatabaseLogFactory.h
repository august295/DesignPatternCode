#ifndef __DATABASELOGFACTORY_H__
#define __DATABASELOGFACTORY_H__

#include "ILogFactory.hpp"
#include "DatabaseLog.h"

class DatabaseLogFactory : public ILogFactory
{
public:
	DatabaseLogFactory();
	~DatabaseLogFactory();

	virtual ILog * CreateLog() override;
};

#endif